----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:21:08 04/28/2023 
-- Design Name: 
-- Module Name:    ModuleTest - Behavioral 
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

entity ModuleTest is
    Port ( SW : in  STD_LOGIC_VECTOR (3 downto 0);
           LEDS : out  STD_LOGIC_VECTOR (3 downto 0));
end ModuleTest;

architecture Behavioral of ModuleTest is
	component ModuleALU is
		Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0);
           S : in  STD_LOGIC_VECTOR (2 downto 0));
	end component;
begin
	MEU_BLOCO: ModuleALU port map(SW,"0011",LEDS,"111");
end Behavioral;

