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
	 f: inout std_logic_vector(15 downto 0);
	 a: inout std_logic_vector(15 downto 0);
	 b: inout std_logic_vector(15 downto 0);
	 c: inout std_logic_vector(15 downto 0);
	 d: inout std_logic_vector(15 downto 0);
	 e: inout std_logic_vector(15 downto 0);
	 g: inout std_logic_vector(15 downto 0);
	 h: inout std_logic_vector(15 downto 0);
	 SPDRM: out std_logic_vector(7 downto 0);
	 SPDRS: out std_logic_vector(7 downto 0) );
end spi;

architecture Behavioral of spi is
begin
process(clk)
begin
	if SPE = '1' then
		if(rising_edge(clk)) then
				if SPIE='0' then
					a<=Input(0) & Input(15 downto 1);
				else		
					SPDRM<=Input(7 downto 0);
					SPDRS<=Input(15 downto 8); 
				end if;
		end if;
		if(rising_edge(clk)) then
				if SPIE='0' then
					b<=a(0) & a(15 downto 1);
				else		
					SPDRM<=a(7 downto 0);
					SPDRS<=a(15 downto 8); 
				end if;
		end if;
		if(rising_edge(clk)) then
				if SPIE='0' then
					c<=b(0) & b(15 downto 1);
				else		
					SPDRM<=b(7 downto 0);
					SPDRS<=b(15 downto 8); 
				end if;
		end if;
		if(rising_edge(clk)) then
				if SPIE='0' then
					d<=c(0) & c(15 downto 1);
				else		
					SPDRM<=c(7 downto 0);
					SPDRS<=c(15 downto 8); 
				end if;
		end if;
		if(rising_edge(clk)) then
				if SPIE='0' then
					e<=d(0) & d(15 downto 1);
				else		
					SPDRM<=d(7 downto 0);
					SPDRS<=d(15 downto 8); 
				end if;
		end if;
		if(rising_edge(clk)) then
				if SPIE='0' then
					f<=e(0) & e(15 downto 1);
				else		
					SPDRM<=e(7 downto 0);
					SPDRS<=e(15 downto 8); 
				end if;
		end if;
		if(rising_edge(clk)) then
				if SPIE='0' then
					g<=f(0) & f(15 downto 1);
				else		
					SPDRM<=f(7 downto 0);
					SPDRS<=f(15 downto 8); 
				end if;
		end if;
		if(rising_edge(clk)) then
				if SPIE='0' then
					h<=g(0) & g(15 downto 1);
					SPDRM<=h(7 downto 0);
					SPDRS<=h(15 downto 8);
				else		
					SPDRM<=g(7 downto 0);
					SPDRS<=g(15 downto 8);
				end if;
		end if;
end if;	
SPIF<='1';
end process; 
end Behavioral;
