library verilog;
use verilog.vl_types.all;
entity lcd_driver is
    port(
        dataa           : in     vl_logic_vector(31 downto 0);
        datab           : in     vl_logic_vector(31 downto 0);
        result          : out    vl_logic_vector(31 downto 0);
        clk             : in     vl_logic;
        clk_en          : in     vl_logic;
        start           : in     vl_logic;
        reset           : in     vl_logic;
        done            : out    vl_logic;
        rs              : out    vl_logic;
        rw              : out    vl_logic;
        en              : out    vl_logic;
        db              : out    vl_logic_vector(7 downto 0)
    );
end lcd_driver;
