library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_arith.all; 
use ieee.std_logic_unsigned.all; 

entity counter4 is 
port ( C,  T: in std_logic; 
Q : out std_logic_vector (3 downto 0)); 
end counter4;

architecture behavioral of counter4 is 
signal counter : std_logic_vector(3 downto 0) := (others => '0');
begin 
process (C, T)
begin
if (rising_edge (C) and T = '1') then
counter <= counter + 1;
else
Q <= counter;
end if;
end process;
end behavioral;