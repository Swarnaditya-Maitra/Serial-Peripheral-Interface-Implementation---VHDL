--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:18:32 11/20/2019
-- Design Name:   
-- Module Name:   C:/Users/SWARNADITYA/Desktop/SPI_effort3/spi/test3.vhd
-- Project Name:  spi
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: spi
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
 
ENTITY test3 IS
END test3;
 
ARCHITECTURE behavior OF test3 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT spi
    PORT(
         clk : IN  std_logic;
         SPIE : IN  std_logic;
         SPE : IN  std_logic;
         SPIF : OUT  std_logic;
         Input : IN  std_logic_vector(15 downto 0);
         SPDRM : OUT  std_logic_vector(7 downto 0);
			A: INOUT  std_logic_vector(15 downto 0);
				B: INOUT  std_logic_vector(15 downto 0);
					C: INOUT  std_logic_vector(15 downto 0);
						D: INOUT  std_logic_vector(15 downto 0);
							E: INOUT  std_logic_vector(15 downto 0);
								F: INOUT  std_logic_vector(15 downto 0);
									G: INOUT  std_logic_vector(15 downto 0);
										H: INOUT  std_logic_vector(15 downto 0);
											
         SPDRS : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal SPIE : std_logic := '0';
   signal SPE : std_logic := '0';
   signal Input : std_logic_vector(15 downto 0) := (others => '0');
	signal H : std_logic_vector(15 downto 0) := (others => '0');
	signal G : std_logic_vector(15 downto 0) := (others => '0');
	signal F : std_logic_vector(15 downto 0) := (others => '0');
	signal E : std_logic_vector(15 downto 0) := (others => '0');
	signal D : std_logic_vector(15 downto 0) := (others => '0');
	signal C : std_logic_vector(15 downto 0) := (others => '0');
	signal B : std_logic_vector(15 downto 0) := (others => '0');
	signal A : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal SPIF : std_logic;
   signal SPDRM : std_logic_vector(7 downto 0);
   signal SPDRS : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: spi PORT MAP (
          clk => clk,
          SPIE => SPIE,
          SPE => SPE,
          SPIF => SPIF,
          Input => Input,
			 F => F,
			 A => A,
			 B => B,
			 C => C,
			 D => D,
			 E => E,
			 G => G,
			 H => H,
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
		SPE<='1';		
		Input<="1000100010001111";
      --wait for clk_period*10;
		SPIE<='0';
		--SPIE<='1';

      -- insert stimulus here 

      wait;
   end process;

END;
