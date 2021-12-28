// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from outcome.djinni

package com.dropbox.djinni.test;

import com.snapchat.djinni.NativeObjectManager;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public abstract class TestOutcome {
    @Nonnull
    public static native com.snapchat.djinni.Outcome<String, Integer> getSuccessOutcome();

    @Nonnull
    public static native com.snapchat.djinni.Outcome<String, Integer> getErrorOutcome();

    @Nonnull
    public static native String putSuccessOutcome(@Nonnull com.snapchat.djinni.Outcome<String, Integer> x);

    public static native int putErrorOutcome(@Nonnull com.snapchat.djinni.Outcome<String, Integer> x);

    @Nonnull
    public static native NestedOutcome getNestedSuccessOutcome();

    @Nonnull
    public static native NestedOutcome getNestedErrorOutcome();

    public static native int putNestedSuccessOutcome(@Nonnull NestedOutcome x);

    @Nonnull
    public static native String putNestedErrorOutcome(@Nonnull NestedOutcome x);

    public static final class CppProxy extends TestOutcome
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
            NativeObjectManager.register(this, nativeRef);
        }
        public static native void nativeDestroy(long nativeRef);
    }
}
