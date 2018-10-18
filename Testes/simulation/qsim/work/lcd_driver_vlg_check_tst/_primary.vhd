library verilog;
use verilog.vl_types.all;
entity lcd_driver_vlg_check_tst is
    port(
        db              : in     vl_logic_vector(7 downto 0);
        done            : in     vl_logic;
        en              : in     vl_logic;
        result          : in     vl_logic_vector(31 downto 0);
        rs              : in     vl_logic;
        rw              : in     vl_logic;
        sampler_rx      : in     vl_logic
    );
end lcd_driver_vlg_check_tst;
