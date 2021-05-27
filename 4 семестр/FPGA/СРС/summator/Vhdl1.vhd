library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity summ  is
port (A:in std_logic;
B: in std_logic;
S: out std_logic;
P: out std_logic);
end summ;

architecture summ_ff  of summ  is
begin
S <= A xor B;
P <= A and B;
end summ_ff;
