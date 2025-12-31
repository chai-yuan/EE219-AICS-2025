`timescale 1ns / 1ps

module pe #(
    parameter DATA_WIDTH = 32
) (
    input                       clk,
    input                       rst_n,
    input                       output_en,
    input                       bypass,
    input      [DATA_WIDTH-1:0] y_in,
    input      [DATA_WIDTH-1:0] x_in,
    input      [DATA_WIDTH-1:0] w_in,
    output reg [DATA_WIDTH-1:0] x_out,
    output reg [DATA_WIDTH-1:0] w_out,
    output     [DATA_WIDTH-1:0] y_out
);
  reg [DATA_WIDTH-1:0] compute_y;

  always @(posedge clk) begin
    if (!rst_n) begin
      x_out <= {DATA_WIDTH{1'b0}};
      w_out <= {DATA_WIDTH{1'b0}};
      compute_y <= {DATA_WIDTH{1'b0}};
    end else begin
      x_out <= x_in;
      w_out <= w_in;
      if (output_en) begin
        compute_y <= compute_y;
      end else begin
        compute_y <= x_in * w_in + compute_y;
      end
    end
  end

  assign y_out = bypass ? y_in : (output_en ? compute_y : 0);
endmodule

