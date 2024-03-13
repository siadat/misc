const std = @import("std");

fn func() void {
    _ = std.mem.asBytes(4);
    _ = std.mem.asBytes("hello");
}

pub fn main() void {
    func();
}

test "testing" {
    func();
}
