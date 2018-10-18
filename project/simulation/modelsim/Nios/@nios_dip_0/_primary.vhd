library verilog;
use verilog.vl_types.all;
entity Nios_dip_0 is
    port(
        address         : in     vl_logic_vector(1 downto 0);
        clk             : in     vl_logic;
        in_port         : in     vl_logic;
        reset_n         : in     vl_logic;
        readdata        : out    vl_logic_vector(31 downto 0)
    );
end Nios_dip_0;
