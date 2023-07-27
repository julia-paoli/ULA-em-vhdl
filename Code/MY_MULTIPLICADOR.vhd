----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:14:25 04/29/2023 
-- Design Name: 
-- Module Name:    MY_MULTIPLICADOR - Behavioral 
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

entity MY_MULTIPLICADOR is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0));
end MY_MULTIPLICADOR;

architecture Behavioral of MY_MULTIPLICADOR is

	component MY_SOMADOR_1BIT is
		Port ( X : in  STD_LOGIC;
           Y : in   STD_LOGIC;
           Cin : in  STD_LOGIC;
           Z : out   STD_LOGIC;
           Cout : out  STD_LOGIC);
	end component;

	signal C0,C1,C2,C3,C4,C5,C12,S1,S2,S3: STD_LOGIC;
	signal A0,A1,A2,A3,A4,A5,A6,A7,A8: STD_LOGIC;

	begin
		-- primeiro bit
		Z(0) <= X(0) and Y(0); 
		-- segundo bit
		A0 <= X(1) and Y(0);
		A1 <= X(0) and Y(1);
		BLOCO1: MY_SOMADOR_1BIT port map (A0,A1, '0' , Z(1), C0);
		-- terceiro bit
		A2 <= X(2) and Y(0);
		A3 <= X(1) and Y(1);
		A4 <= X(0) and Y(2);
		BLOCO2: MY_SOMADOR_1BIT port map (A2,A3, C0 , S1, C1);
		BLOCO3: MY_SOMADOR_1BIT port map (S1 ,A4, '0' , Z(2), C2);
		-- quarto bit
		A5 <= X(3) and Y(0);
		A6 <= X(2) and Y(1);
		A7 <= X(1) and Y(2);
		A8 <= X(0) and Y(3);
		C12 <= C1 xor C2;
		BLOCO4: MY_SOMADOR_1BIT port map (A5,A6, C12 , S2, C3);
		BLOCO5: MY_SOMADOR_1BIT port map (S2,A7, '0' , S3, C4);
		BLOCO6: MY_SOMADOR_1BIT port map (S3,A8, '0', Z(3), C5);
		
	
end Behavioral;

