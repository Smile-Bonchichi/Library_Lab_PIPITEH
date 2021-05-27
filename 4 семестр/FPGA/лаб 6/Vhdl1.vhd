library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity rs_trigger is
port( BUTTON0, BUTTON1: in std_logic;
LEDG0, LEDG1, LEDG2: out std_logic);
end rs_trigger;

architecture rs_trigger_code of rs_trigger is
begin
LEDG0 <= '1' when BUTTON0 = '0' and BUTTON1 = '1'
else '0' when BUTTON0 = '1' and BUTTON1 = '0';
LEDG1 <= '1' when BUTTON0 = '1' and BUTTON1 = '0'
else '0' when BUTTON0 = '0' and BUTTON1 = '1';
LEDG2 <= '1' when BUTTON0 = '0' and BUTTON1 = '1'
else '0' when BUTTON0 = '1' and BUTTON1 = '0';
end rs_trigger_code;