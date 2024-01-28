# add test cases
list(APPEND SOURCE_FILES
   atomicRef.cpp
   atomicRefCopy.cpp
   atomicReference.cpp
   bossWorkers.cpp
   conditionVariableAny.cpp
   coutSynchronized.cpp
   coutUnsynchronized.cpp
   eagerFuture.cpp
   fullTimePartTimeWorkers.cpp
   greedyGenerator.cpp
   infiniteDataStream.cpp
   interruptJthread.cpp
   invokeCallback.cpp
   jthreadJoinable.cpp
   lazyGenerator.cpp
   senderReceiver.cpp
   sequenceOutput.cpp
   startJob.cpp
   synchronizedOutput.cpp
   threadJoinable.cpp
   threadSynchronizationAtomicBool.cpp
   threadSynchronizationAtomicFlag.cpp
   threadSynchronizationConditionVariables.cpp
   threadSynchronizationPromiseFuture.cpp
   threadSynchronizationSemaphore.cpp
   workers.cpp
)

foreach (SOURCE_PATH ${SOURCE_FILES})
   get_filename_component(TargetName ${SOURCE_PATH} NAME_WE)

   message(STATUS "Test application ${TargetName}")
   add_executable(${TargetName} ${SOURCE_PATH})

endforeach ()
