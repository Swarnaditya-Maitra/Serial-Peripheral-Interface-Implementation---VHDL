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

entity spi_67 is
	 port( clk: in std_logic;
 	 SPIE: in std_logic; 
 	 x: in std_logic;
	 SPE: in std_logic; 
	 SPIF: out std_logic; 
 	 Input: in std_logic_vector(15 downto 0);
	 SPDRM: out std_logic_vector(7 downto 0);
	 SPDRS: out std_logic_vector(7 downto 0) );
end spi_67;

architecture Behavioral of spi_67 is
begin
   process(clk,SPIE,SPE)
   variable temp: std_logic_vector(15 downto 0); 
   variable count: integer :=0;
   begin
		if SPE='1' then
      if(rising_edge(clk)) then
      temp := Input; 
		while count<8 loop 
		if SPIE='0' then
		temp(15) :=x;
         for i in 1 to 14 loop
            temp(i+1) := temp(i);
         end loop;
         temp(0) := x;
		count :=count+1;
      end if;
		end loop;
      SPIF<='1';
		SPDRM<=temp(7 downto 0);
		SPDRS<=temp(15 downto 8);
		end if;
		end if;
    end process;
end Behavioral;
