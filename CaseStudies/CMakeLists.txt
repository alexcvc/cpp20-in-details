# add test cases
list(APPEND SOURCE_FILES
   coroutineGetElements.cpp
   eagerFutureWithComments.cpp
   infiniteDataStreamComments.cpp
   lazyFuture.cpp
   lazyFutureOnOtherThread.cpp
   pingPongAtomicBool.cpp
   pingPongAtomicFlag.cpp
   pingPongAtomicFlags.cpp
   pingPongConditionVariable.cpp
   pingPongSemaphore.cpp
   startJobWithAutomaticResumption.cpp
   startJobWithAutomaticResumptionOnThread.cpp
   startJobWithComments.cpp

)

foreach (SOURCE_PATH ${SOURCE_FILES})
   get_filename_component(TargetName ${SOURCE_PATH} NAME_WE)

   message(STATUS "Test application ${TargetName}")
   add_executable(${TargetName} ${SOURCE_PATH})

endforeach ()
