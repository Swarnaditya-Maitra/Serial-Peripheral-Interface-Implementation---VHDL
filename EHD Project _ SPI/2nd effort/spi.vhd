----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:53:11 11/18/2019 
-- Design Name: 
-- Module Name:    spi_67 - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity spi is
	 port( clk: in std_logic;
 	 SPIE: in std_logic; 
	 SPE: in std_logic; 
	 SPIF: out std_logic; 
 	 Input: in std_logic_vector(15 downto 0);
	 SPDRM: out std_logic_vector(7 downto 0);
	 SPDRS: out std_logic_vector(7 downto 0) );
end spi;

architecture Behavioral of spi is
begin
process

	variable temp: std_logic_vector(15 downto 0); 
	variable x: std_logic;
begin
	if SPE = '1' then
	temp := Input;
	wait until rising_edge(clk);
		if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	 --wait until rising_edge(clk);
	 if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	--wait until rising_edge(clk);
	 if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	--wait until rising_edge(clk);
	 if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	 --wait until rising_edge(clk);
	 if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	 --wait until rising_edge(clk);
	 if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	--wait until rising_edge(clk);
	 if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	--wait until rising_edge(clk);
	 if (SPIE='0') then
			x:= temp(0);
         for i in 0 to 14 loop
            temp(i) := temp(i+1);
         end loop;
         temp(15) := x;
		end if;
	end if;
	SPIF<='1';
SPDRM<=temp(7 downto 0);
SPDRS<=temp(15 downto 8);	
end process;   
end Behavioral;
