--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:25:54 11/20/2019
-- Design Name:   
-- Module Name:   C:/Users/SWARNADITYA/Desktop/SPI/spi/spi_tb.vhd
-- Project Name:  spi
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: spi_67
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY spi_tb IS
END spi_tb;
 
ARCHITECTURE behavior OF spi_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT spi_67
    PORT(
         clk : IN  std_logic;
         SPIE : IN  std_logic;
         x : IN  std_logic;
         SPE : IN  std_logic;
         SPIF : OUT  std_logic;
         Input : IN  std_logic_vector(15 downto 0);
         SPDRM : OUT  std_logic_vector(7 downto 0);
         SPDRS : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal SPIE : std_logic := '0';
   signal x : std_logic := '0';
   signal SPE : std_logic := '0';
   signal Input : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal SPIF : std_logic;
   signal SPDRM : std_logic_vector(7 downto 0);
   signal SPDRS : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: spi_67 PORT MAP (
          clk => clk,
          SPIE => SPIE,
          x => x,
          SPE => SPE,
          SPIF => SPIF,
          Input => Input,
          SPDRM => SPDRM,
          SPDRS => SPDRS
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
     -- wait for 100 ns;	
			Input<="1000111110001000";
			SPE<='1';
			SPIE<='0';
			x<=Input(0);
      wait for clk_period*3;
				SPIE<='1';
				wait;
      -- insert stimulus here 

      wait;
   end process;

END;
