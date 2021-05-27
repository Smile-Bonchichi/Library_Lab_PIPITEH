library ieee;
use ieee.std_logic_1164.all;

entity coder is
port(
SW0, SW1, SW2, SW3: in std_logic;
LEDG0, LEDG1, LEDG2: out std_logic);
end coder;

architecture coder_arc of coder is
begin
LEDG0 <= not SW0 and not SW2;
LEDG1 <= SW2 or SW3;
LEDG2 <= (SW2 and SW3) or (SW1 and SW2) or (SW0 and SW2) or (SW0 and SW3) or (SW1 and SW3) or (SW0 and SW1) 
        or (not SW0 and not SW1 and not SW2 and not SW3);
end coder_arc;