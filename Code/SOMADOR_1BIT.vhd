----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:52:23 05/19/2023 
-- Design Name: 
-- Module Name:    SOMADOR_1BIT - Behavioral 
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

entity MY_SOMADOR_1BIT is
    Port ( X : in  STD_LOGIC;
           Y : in   STD_LOGIC;
           Cin : in  STD_LOGIC;
           Z : out   STD_LOGIC;
           Cout : out  STD_LOGIC);
end MY_SOMADOR_1BIT;

architecture Behavioral of MY_SOMADOR_1BIT is

	signal S0,S1,S2,S3: STD_LOGIC;
	
	begin
		S0 <= Cin xor Y;
		Z <= S0 xor X;
		S1 <= Cin and Y;
		S2 <= Cin and X;
		S3 <= X and Y;
		Cout <= S1 or S2 or S3;
		
end Behavioral;


