----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:21:37 04/29/2023 
-- Design Name: 
-- Module Name:    MY_SOMADOR - Behavioral 
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


entity MY_SOMADOR_4BIT is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Cin : in  STD_LOGIC;
           Z : out   STD_LOGIC_VECTOR (3 downto 0);
           Cout : out  STD_LOGIC);
end MY_SOMADOR_4BIT;


architecture Behavioral of MY_SOMADOR_4BIT is

	component MY_SOMADOR_1BIT is
		Port ( X : in  STD_LOGIC;
           Y : in   STD_LOGIC;
           Cin : in  STD_LOGIC;
           Z : out   STD_LOGIC;
           Cout : out  STD_LOGIC);
	end component;
	 
	signal C0,C1,C2 :STD_LOGIC;
	
	begin
	
	BLOCO1: MY_SOMADOR_1BIT port map(X(0),Y(0),Cin,Z(0),C0);
	BlOCO2: MY_SOMADOR_1BIT port map(X(1),Y(1),C0,Z(1),C1);
	BlOCO3: MY_SOMADOR_1BIT port map(X(2),Y(2),C1,Z(2),C2);
	BlOCO4: MY_SOMADOR_1BIT port map(X(3),Y(3),C2,Z(3),Cout);
		
end Behavioral;
