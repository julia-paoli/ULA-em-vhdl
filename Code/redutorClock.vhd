----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:22:01 06/07/2023 
-- Design Name: 
-- Module Name:    redutorClock - Behavioral 
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
----------------------------------------------------------------------------------ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity redutorClock is
    port (
        clk_in : in std_logic;
        clk_out : out std_logic
    );
end redutorClock;

architecture arcRedutorClock of redutorClock is
    signal aux : integer;
    begin
        process(clk_in)
		  begin
            if(clk_in'event and clk_in = '1') then
                -- o clock interno da placa possui freq de 50MHz. Vamos multiplicar seu periodo por 
                -- 100 milhoes para ter um periodo de 2 segundos
                if(aux = 100000000 ) then  -- variavel auxiliar vai de zero ate 100milhoes e volta
                   aux<=0;
                else
                    aux <= aux + 1;
                end if;

                if(aux >= 50000000) then -- metado do tempo ela ta em high, metade em low
                    clk_out <='1';
                else
                    clk_out <='0';
                end if;
            end if;
        end process;
end architecture;


