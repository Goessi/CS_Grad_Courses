/* Copyright (c) 2007-2016 MIT 6.005 course staff, all rights reserved.
 * Redistribution of original or derived work requires permission of course staff.
 */
package turtle;

import java.util.Random;

/**
 * Enumeration of turtle pen colors.
 * 
 * You may not modify this enumeration.
 */
public enum PenColor {
    BLACK,
    GRAY,
    RED,
    PINK,
    ORANGE,
    YELLOW,
    GREEN,
    CYAN,
    BLUE,
    MAGENTA;
	
	private static final PenColor[] v = values();
	private static final int size = v.length;
	private static final Random r = new Random();
	
	public static PenColor getRandomColor() {
		return v[r.nextInt(size)];
	}
}
