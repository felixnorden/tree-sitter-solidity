cmd_Release/obj.target/tree_sitter_solidity_binding/bindings/node/binding.o := c++ -o Release/obj.target/tree_sitter_solidity_binding/bindings/node/binding.o ../bindings/node/binding.cc '-DNODE_GYP_MODULE_NAME=tree_sitter_solidity_binding' '-DUSING_UV_SHARED=1' '-DUSING_V8_SHARED=1' '-DV8_DEPRECATION_WARNINGS=1' '-DV8_DEPRECATION_WARNINGS' '-DV8_IMMINENT_DEPRECATION_WARNINGS' '-D_GLIBCXX_USE_CXX11_ABI=1' '-D_DARWIN_USE_64_BIT_INODE=1' '-D_LARGEFILE_SOURCE' '-D_FILE_OFFSET_BITS=64' '-DBUILDING_NODE_EXTENSION' -I/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node -I/Users/felixn/Library/Caches/node-gyp/17.6.0/src -I/Users/felixn/Library/Caches/node-gyp/17.6.0/deps/openssl/config -I/Users/felixn/Library/Caches/node-gyp/17.6.0/deps/openssl/openssl/include -I/Users/felixn/Library/Caches/node-gyp/17.6.0/deps/uv/include -I/Users/felixn/Library/Caches/node-gyp/17.6.0/deps/zlib -I/Users/felixn/Library/Caches/node-gyp/17.6.0/deps/v8/include -I../node_modules/nan -I../src  -O3 -gdwarf-2 -flto -mmacosx-version-min=10.13 -arch x86_64 -Wall -Wendif-labels -W -Wno-unused-parameter -std=gnu++17 -stdlib=libc++ -fno-rtti -fno-exceptions -fno-strict-aliasing -MMD -MF ./Release/.deps/Release/obj.target/tree_sitter_solidity_binding/bindings/node/binding.o.d.raw   -c
Release/obj.target/tree_sitter_solidity_binding/bindings/node/binding.o: \
  ../bindings/node/binding.cc ../src/tree_sitter/parser.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/cppgc/common.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8config.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-array-buffer.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-local-handle.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-internal.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-version.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-object.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-maybe.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-persistent-handle.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-weak-callback-info.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-primitive.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-data.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-value.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-traced-handle.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-container.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-context.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-snapshot.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-date.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-debug.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-exception.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-extension.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-external.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-function.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-function-callback.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-message.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-template.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-memory-span.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-initialization.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-isolate.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-callbacks.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-embedder-heap.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-microtask.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-statistics.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-promise.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-unwinder.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-platform.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-json.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-locker.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-microtask-queue.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-primitive-object.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-proxy.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-regexp.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-script.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-typed-array.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-value-serializer.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-wasm.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node_version.h \
  ../node_modules/nan/nan.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/errno.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/version.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/unix.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/threadpool.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/darwin.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node_buffer.h \
  /Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node_object_wrap.h \
  ../node_modules/nan/nan_callbacks.h \
  ../node_modules/nan/nan_callbacks_12_inl.h \
  ../node_modules/nan/nan_maybe_43_inl.h \
  ../node_modules/nan/nan_converters.h \
  ../node_modules/nan/nan_converters_43_inl.h \
  ../node_modules/nan/nan_new.h \
  ../node_modules/nan/nan_implementation_12_inl.h \
  ../node_modules/nan/nan_persistent_12_inl.h \
  ../node_modules/nan/nan_weak.h ../node_modules/nan/nan_object_wrap.h \
  ../node_modules/nan/nan_private.h \
  ../node_modules/nan/nan_typedarray_contents.h \
  ../node_modules/nan/nan_json.h ../node_modules/nan/nan_scriptorigin.h
../bindings/node/binding.cc:
../src/tree_sitter/parser.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/cppgc/common.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8config.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-array-buffer.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-local-handle.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-internal.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-version.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-object.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-maybe.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-persistent-handle.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-weak-callback-info.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-primitive.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-data.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-value.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-traced-handle.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-container.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-context.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-snapshot.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-date.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-debug.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-exception.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-extension.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-external.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-function.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-function-callback.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-message.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-template.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-memory-span.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-initialization.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-isolate.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-callbacks.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-embedder-heap.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-microtask.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-statistics.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-promise.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-unwinder.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-platform.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-json.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-locker.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-microtask-queue.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-primitive-object.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-proxy.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-regexp.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-script.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-typed-array.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-value-serializer.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/v8-wasm.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node_version.h:
../node_modules/nan/nan.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/errno.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/version.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/unix.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/threadpool.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/uv/darwin.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node_buffer.h:
/Users/felixn/Library/Caches/node-gyp/17.6.0/include/node/node_object_wrap.h:
../node_modules/nan/nan_callbacks.h:
../node_modules/nan/nan_callbacks_12_inl.h:
../node_modules/nan/nan_maybe_43_inl.h:
../node_modules/nan/nan_converters.h:
../node_modules/nan/nan_converters_43_inl.h:
../node_modules/nan/nan_new.h:
../node_modules/nan/nan_implementation_12_inl.h:
../node_modules/nan/nan_persistent_12_inl.h:
../node_modules/nan/nan_weak.h:
../node_modules/nan/nan_object_wrap.h:
../node_modules/nan/nan_private.h:
../node_modules/nan/nan_typedarray_contents.h:
../node_modules/nan/nan_json.h:
../node_modules/nan/nan_scriptorigin.h:
