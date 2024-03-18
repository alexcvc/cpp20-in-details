# add test cases
list(APPEND SOURCE_FILES
   bindFront.cpp
   bit.cpp
   bitFloorCeil.cpp
   checkExistence.cpp
   classicalComparison.cpp
   CMakeLists.txt
   constantEvaluated.cpp
   constexprVector.cpp
   constRangeModifiableElements.cpp
   containerView.cpp
   containtsElement.cpp
   createCalendar.cpp
   createSpan.cpp
   cuteSyntax.cpp
   eraseCpp20.cpp
   eraseRemoveElements.cpp
   filterRanges.cpp
   format.cpp
   formatAlternate.cpp
   formatArgumentID.cpp
   formatFillAlign.cpp
   formatHash.cpp
   formatSign.cpp
   formatType.cpp
   formatVector.cpp
   formatVectorLinebreak.cpp
   formatWidthPrecision.cpp
   getEndianness.cpp
   leapYear.cpp
   listComprehensionRanges.cpp
   localTime.cpp
   mapRanges.cpp
   mathematicConstants.cpp
   midpointLerp.cpp
   onlineClass.cpp
   ordinalDate.cpp
   printSpan.cpp
   queryCalendarDates.cpp
   rangeProjection.cpp
   rangesComposition.cpp
   rangesEntireContainer.cpp
   rangesFilterTransform.cpp
   rangesIota.cpp
   rangesLazy.cpp
   removeElements.cpp
   safeComparison.cpp
   safeComparison2.cpp
   sortClassic.cpp
   sortRanges.cpp
   sourceLocation.cpp
   spanTransform.cpp
   staticDynamicExtentSpan.cpp
   stringStartsWithEndsWith.cpp
   subspan.cpp
   sysDays.cpp
   timeOfDay.cpp
   toArray.cpp
   unsafeComparison.cpp
   unsafeComparison2.cpp
   weekdaysOfBirthdays.cpp
)

foreach (SOURCE_PATH ${SOURCE_FILES})
   get_filename_component(TargetName ${SOURCE_PATH} NAME_WE)

   message(STATUS "Test application ${TargetName}")
   add_executable(${TargetName} ${SOURCE_PATH})

endforeach ()
