----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:55:53 04/29/2023 
-- Design Name: 
-- Module Name:    MY_SUBTRATOR - Behavioral 
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

entity MY_SUBTRATOR_4BIT is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0);
           Bout : out  STD_LOGIC);
end MY_SUBTRATOR_4BIT;

architecture Behavioral of MY_SUBTRATOR_4BIT is
	
	component MY_SOMADOR_4BIT is
		 Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Cin : in  STD_LOGIC;
           Z : out   STD_LOGIC_VECTOR (3 downto 0);
           Cout : out  STD_LOGIC);
	end component;
	
	signal C1y:  STD_LOGIC_VECTOR (3 downto 0);
	signal Cout: STD_LOGIC; 
	
	begin
		C1y <= not Y;
		MY_BLOCO: MY_SOMADOR_4BIT port map(X,C1y,'1',Z,Cout);
		Bout <= not Cout;
 

end Behavioral;

