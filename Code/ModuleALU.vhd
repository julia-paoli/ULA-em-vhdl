----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:34:31 04/28/2023 
-- Design Name: 
-- Module Name:    ModuleALU - Behavioral 
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

entity ModuleALU is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0);
           S : in  STD_LOGIC_VECTOR (2 downto 0));
end ModuleALU;

architecture Behavioral of ModuleALU is

	component ModuleAND is
		 Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
				  B : in  STD_LOGIC_VECTOR (3 downto 0);
				  Z : out  STD_LOGIC_VECTOR (3 downto 0));
	end component;
	
	component ModuleOR is
		 Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
				  B : in  STD_LOGIC_VECTOR (3 downto 0);
				  Z : out  STD_LOGIC_VECTOR (3 downto 0));
	end component;
	
	component ModuleNOT is
		 Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
				  Z : out  STD_LOGIC_VECTOR (3 downto 0));
	end component;

	component ModuleXOR is
		 Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
				  B : in  STD_LOGIC_VECTOR (3 downto 0);
				  Z : out  STD_LOGIC_VECTOR (3 downto 0));
	end component;
	
	 component MY_SOMADOR_4BIT is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Cin : in  STD_LOGIC;
           Z : out   STD_LOGIC_VECTOR (3 downto 0);
           Cout : out  STD_LOGIC);
	end component;
	
	component MY_SUBTRATOR_4BIT is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0);
           Bout : out  STD_LOGIC);
	end component;
	
	 component MY_MULTIPLICADOR is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Y : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0));
	end component;
	
	component MY_C2 is
    Port ( X : in  STD_LOGIC_VECTOR (3 downto 0);
           Z : out  STD_LOGIC_VECTOR (3 downto 0));
	end component;
	
	signal Z0,Z1,Z2,Z3,Z4,Z5,Z6,Z7: STD_LOGIC_VECTOR (3 downto 0);
	signal Cout, Bout: STD_LOGIC;

	begin
		MY_AND: ModuleAND port map (A,B,Z0);
		MY_OR: ModuleOR port map (A,B,Z1);
		MY_NOT: ModuleNOT port map (A,Z2);
		MY_XOR: ModuleXOR port map (A,B,Z3);
		MY_SOMADOR_MODULE_4BIT: MY_SOMADOR_4BIT port map (A,B,'0',Z4,Cout);
		MY_SUBTRATOR_MODULE_4BIT: MY_SUBTRATOR_4BIT port map (A,B,Z5,Bout);
		MY_MULTIPLICADOR_MODULE: MY_MULTIPLICADOR port map (A,B,Z6);
		MY_C2_MODULE : MY_C2 port map (A,Z7);
		
		process
		begin
			if (S = "000") then
				Z <= Z0;
			end if;
			if (S = "001") then
				Z <= Z1;
			end if;
			if (S = "010") then
				Z <= Z2;
			end if;	
			if (S = "011") then
				Z <= Z3;
			end if;
			if (S = "100") then
				Z <= Z4;
			end if;
			if (S = "101") then
				Z <= Z5;
			end if;
			if (S = "110") then
				Z <= Z6;
			end if;
			if (S = "111") then
				Z <= Z7;
			end if;
		end process;
	
end Behavioral;

