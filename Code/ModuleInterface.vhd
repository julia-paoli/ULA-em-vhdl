----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:18:05 06/07/2023 
-- Design Name: 
-- Module Name:    ModuleInterface - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ModuloInterface is
    port (
        clk : in std_logic;
        BOTAO_A : in std_logic;
        BOTAO_B : in std_logic;
        BOTAO_S : in std_logic;
        BOTAO_RST : in std_logic;
        SW : in std_logic_vector (3 downto 0);
        LED_A : out std_logic;
        LED_B : out std_logic;
        LED_S : out std_logic;
        LEDS: out std_logic_vector (3 downto 0)
    );
end ModuloInterface;

architecture Behavioral of ModuloInterface is

    component ModuleALU is -- pegando a ALU
		Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0);
           S : in  STD_LOGIC_VECTOR (2 downto 0));
	end component;

    component redutorClock is -- pegando o clk
        port (
            clk_in : in std_logic;
            clk_out : out std_logic
        );
    end component;

    type estado is (E0,E1,E2,E3,E4,E5,E6,E7,E8,E9,E10,E11,E12,E13,E14,E15,E16,E17,E18,E19,E20,E21,E22,E23,E24,E25,E26,e27);
	 -- criando os estados
    signal estadoAtual, estadoAux: estado := E0; -- criando o estado oficial e uma auxiliar
    signal A,B,S_inicial: std_logic_vector (3 downto 0); -- sinais do numero A, B e a selecao S recebida nos SW 
    signal Z0,Z1,Z2,Z3,Z4,Z5,Z6,Z7 : std_logic_vector (3 downto 0); -- sinais de saida
    signal S_int : integer;
	 signal clk_novo : std_logic;

begin
    BLOCO_CLK : redutorClock port map (clk,clk_novo); -- mandamos o clk da placo e pegamos um reduzido que eh o q vamos usar
    BLOCO_ALU0: ModuleALU port map(A,B,Z0,"000"); -- conectando as entradas e saidas da ALU para S = 0
    BLOCO_ALU1: ModuleALU port map(A,B,Z1,"001"); -- conectando as entradas e saidas da ALU para S = 1
    BLOCO_ALU2: ModuleALU port map(A,B,Z2,"010"); -- conectando as entradas e saidas da ALU para S = 2
    BLOCO_ALU3: ModuleALU port map(A,B,Z3,"011"); -- conectando as entradas e saidas da ALU para S = 3
    BLOCO_ALU4: ModuleALU port map(A,B,Z4,"100"); -- conectando as entradas e saidas da ALU para S = 4
    BLOCO_ALU5: ModuleALU port map(A,B,Z5,"101"); -- conectando as entradas e saidas da ALU para S = 5
    BLOCO_ALU6: ModuleALU port map(A,B,Z6,"110"); -- conectando as entradas e saidas da ALU para S = 6
    BLOCO_ALU7: ModuleALU port map(A,B,Z7,"111"); -- conectando as entradas e saidas da ALU para S = 7


    process(clk_novo, estadoAux) -- logica do estado auxiliar
    begin
        if(clk_novo'event and clk_novo='1') then
            estadoAtual <= estadoAux;  -- alteramos o estado no clock
        end if;
    end process;

    process(BOTAO_A,BOTAO_B, BOTAO_S,BOTAO_RST, SW,estadoAtual) -- agora a logica da maquina de estados
    begin
		  report "Iniciou";
        if (BOTAO_RST = '1') then -- caso tenhamos RST, voltamos para o primeiro estado
            estadoAux <= E0;
            LEDS <= "0000";   -- apaga os LEDS
				report "Resetou";
        else                    -- resto da logica acontece se nao tivermos o reset
            case estadoAtual is
                when E0 =>       -- E0 -> pegar o numero A ---------------------------------------
                    LED_A <= '1';      -- acende o led q sinaliza q estamos pegando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    if(BOTAO_A = '1') then  -- gravamos oq esta nos switchs quando o botao é apertado
                        A <= SW;
                        LED_A <= '0';      -- apaga o led
                        estadoAux<=E1;     -- mudamos de estado
                    else
                         estadoAux<=E0;  -- se o batao nao for apertado cont no mesmo estado
                    end if;
                when E1 => -- E1 -> pegar o numero B ---------------------------------------
                    LED_B <= '1';      -- acende o led q sinaliza q estamos pegando o segundo num
                    LED_A <= '0';
                    LED_S <= '0'; 

                    if(BOTAO_B = '1') then  -- gravamos oq esta nos switchs quando o botao é apertado
                        B <= SW;
                        LED_B <= '0';      -- apaga o led
                        estadoAux<=E2;     -- mudamos de estado
                    else
                         estadoAux<=E1;  -- se o batao nao for apertado cont no mesmo estado
                    end if;
                when E2 => -- E2 -> pegar a selecao  ---------------------------------------
                    LED_S <= '1';      -- acende o led q sinaliza q estamos pegando a selecao
                    LED_A <= '0';
                    LED_B <= '0'; 

                    if(BOTAO_S = '1') then  -- gravamos oq esta nos switchs quando o botao é apertado
                        S_inicial <= SW;

                        if(S_inicial = "0000") then -- passando de binario para inteiro
                            estadoAux<=E3;  
                        elsif(S_inicial = "0001") then
                            estadoAux<=E6;  
                        elsif(S_inicial = "0010") then
                           estadoAux<=E9;
                        elsif(S_inicial = "0011") then
                           estadoAux<=E12;
                        elsif(S_inicial = "0100") then
                            estadoAux<=E15;
                        elsif(S_inicial = "0101") then
                            estadoAux<=E18;
                        elsif(S_inicial = "0110") then
                            estadoAux<=E21;
                        elsif(S_inicial = "0111") then
                            estadoAux<=E24;
                        end if;
                            
                        LED_S <= '0';      -- apaga o led
                    else
                         estadoAux<=E2;  -- se o batao nao for apertado cont no mesmo estado
                    end if;
                when E3 =>  -- E3 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E4;  -- proximo
                when E4 =>  -- E4 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E5;  -- proximo
                when E5 =>  -- E5 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1'; 
                    LEDS<=Z0;
                    estadoAux <= E6;
				   when E6 =>  -- E6 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E7;  -- proximo
                when E7 =>  -- E7 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E8;  -- proximo
                when E8 =>  -- E8 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1'; 
                    LEDS <= Z1;
                    estadoAux <= E9;
				     when E9 =>  -- E9 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E10;  -- proximo
                when E10 =>  -- E10 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E11;  -- proximo
                when E11 =>  -- E11 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1'; 
                    LEDS <= Z2;
                    estadoAux <= E12;
					 when E12 =>  -- E12 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E13;  -- proximo
                when E13 =>  -- E13 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E14;  -- proximo
                when E14 =>  -- E14 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1';
						  
                    LEDS <= Z3;
                    estadoAux <= E15 ;
					 when E15 =>  -- E15 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E16;  -- proximo
                when E16 =>  -- E16 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E17;  -- proximo
                when E17 =>  -- E17 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1'; 
                    LEDS<=Z4;
						  
                    estadoAux <= E18;
						when E18 =>  -- E18 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E19;  -- proximo
                when E19 =>  -- E19 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E20;  -- proximo
                when E20 =>  -- E20 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1'; 
                    LEDS<=Z5;
						 
                    estadoAux <= E21;
					when E21 =>  -- E21 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E22;  -- proximo
                when E22 =>  -- E22 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E23;  -- proximo
                when E23 =>  -- E23 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1'; 
                    LEDS<=Z6;
						 
                    estadoAux <= E24;
					when E24 =>  -- E24 -> mostra p numero A ---------------------------------------

                    LED_A <= '1';  -- acende o led q sinaliza q estamos mostrando o primeiro num
                    LED_B <= '0';
                    LED_S <= '0'; 

                    LEDS <= A ;         --- mostra A
                    estadoAux<=E25;  -- proximo
                when E25 =>  -- E25 -> mostra p numero B ---------------------------------------
                    
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando no segundo num
                    LED_B <= '1';
                    LED_S <= '0'; 

                    LEDS <= B ;         --- mostra B
                    estadoAux<=E26;  -- proximo
                when E26 =>  -- E26 -> mostra o resultado ---------------------------------------          
                    LED_A <= '0';  -- acende o led q sinaliza q estamos mostrando o resultado
                    LED_B <= '0';
                    LED_S <= '1'; 
                    LEDS<=Z7;
						 
                    estadoAux <= E3;					  
                when others =>
                    null;

            end case; 
        end if;       
    end process;


end architecture;
