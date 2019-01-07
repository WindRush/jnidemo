package com.android.jnidemo;

/**
 * Created by yanglihai on 2018/1/25.
 * Modify:yanglihai
 * Modify Time:2018/1/25.
 * Modify Describe:
 * Describe:
 */
public class JniManager {

    static {
        System.loadLibrary("nativecat");
    }

    public static native void logc(String str);
}
