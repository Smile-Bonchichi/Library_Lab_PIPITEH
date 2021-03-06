library ieee; 
use ieee.std_logic_1164.all; 

entity registr1 is
port ( 
D:in std_logic_vector (3 downto 0);
C, E: in std_logic;
Q: buffer std_logic_vector (3 downto 0)
);
end registr1;

architecture behav of registr1 is
begin
process(C,D,E)
begin
if(rising_edge(C)) then
if(E='1') then
Q<=D;
else
Q<=Q;
end if;
end if;
end process;
end behav;