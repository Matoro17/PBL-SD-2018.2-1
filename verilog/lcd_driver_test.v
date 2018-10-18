
module tb_lcd_driver:
    reg dataa, datab, clk, clk_en, start, reset;
    wire rs, rw, en, db;

    lcd lcd_driver(dataa, datab, result, clk, clk_en, start, reset, done, rs, rw, en, db);

    initial 
        begin
          
        end
endmodule


