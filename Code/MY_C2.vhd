----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:28:12 06/02/2023 
-- Design Name: 
-- Module Name:    MY_C2 - Behavioral 
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

entity MY_C2 is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0));
end MY_C2;

architecture Behavioral of MY_C2 is
	component MY_SOMADOR_4BIT is
		 Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Cin : in  STD_LOGIC;
           Z : out   STD_LOGIC_VECTOR (3 downto 0);
           Cout : out  STD_LOGIC);
	end component;
	
	signal C1:  STD_LOGIC_VECTOR (3 downto 0);
	signal Cout: STD_LOGIC; 
	
	begin
		C1 <= not X;
		MY_BLOCO: MY_SOMADOR_4BIT port map(C1,"0000",'1',Z,Cout);


end Behavioral;

