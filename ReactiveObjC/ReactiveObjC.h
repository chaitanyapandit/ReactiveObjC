//
//  ReactiveObjC.h
//  ReactiveObjC
//
//  Created by Josh Abernathy on 3/5/12.
//  Copyright (c) 2012 GitHub, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for ReactiveObjC.
FOUNDATION_EXPORT double ReactiveObjCVersionNumber;

//! Project version string for ReactiveObjC.
FOUNDATION_EXPORT const unsigned char ReactiveObjCVersionString[];

#import <ReactiveObjC_PulseID/EXTKeyPathCoding.h>
#import <ReactiveObjC_PulseID/EXTScope.h>
#import <ReactiveObjC_PulseID/NSArray+RACSequenceAdditions.h>
#import <ReactiveObjC_PulseID/NSData+RACSupport.h>
#import <ReactiveObjC_PulseID/NSDictionary+RACSequenceAdditions.h>
#import <ReactiveObjC_PulseID/NSEnumerator+RACSequenceAdditions.h>
#import <ReactiveObjC_PulseID/NSFileHandle+RACSupport.h>
#import <ReactiveObjC_PulseID/NSNotificationCenter+RACSupport.h>
#import <ReactiveObjC_PulseID/NSObject+RACDeallocating.h>
#import <ReactiveObjC_PulseID/NSObject+RACLifting.h>
#import <ReactiveObjC_PulseID/NSObject+RACPropertySubscribing.h>
#import <ReactiveObjC_PulseID/NSObject+RACSelectorSignal.h>
#import <ReactiveObjC_PulseID/NSOrderedSet+RACSequenceAdditions.h>
#import <ReactiveObjC_PulseID/NSSet+RACSequenceAdditions.h>
#import <ReactiveObjC_PulseID/NSString+RACSequenceAdditions.h>
#import <ReactiveObjC_PulseID/NSString+RACSupport.h>
#import <ReactiveObjC_PulseID/NSIndexSet+RACSequenceAdditions.h>
#import <ReactiveObjC_PulseID/NSUserDefaults+RACSupport.h>
#import <ReactiveObjC_PulseID/RACBehaviorSubject.h>
#import <ReactiveObjC_PulseID/RACChannel.h>
#import <ReactiveObjC_PulseID/RACCommand.h>
#import <ReactiveObjC_PulseID/RACCompoundDisposable.h>
#import <ReactiveObjC_PulseID/RACDelegateProxy.h>
#import <ReactiveObjC_PulseID/RACDisposable.h>
#import <ReactiveObjC_PulseID/RACEvent.h>
#import <ReactiveObjC_PulseID/RACGroupedSignal.h>
#import <ReactiveObjC_PulseID/RACKVOChannel.h>
#import <ReactiveObjC_PulseID/RACMulticastConnection.h>
#import <ReactiveObjC_PulseID/RACQueueScheduler.h>
#import <ReactiveObjC_PulseID/RACQueueScheduler+Subclass.h>
#import <ReactiveObjC_PulseID/RACReplaySubject.h>
#import <ReactiveObjC_PulseID/RACScheduler.h>
#import <ReactiveObjC_PulseID/RACScheduler+Subclass.h>
#import <ReactiveObjC_PulseID/RACScopedDisposable.h>
#import <ReactiveObjC_PulseID/RACSequence.h>
#import <ReactiveObjC_PulseID/RACSerialDisposable.h>
#import <ReactiveObjC_PulseID/RACSignal+Operations.h>
#import <ReactiveObjC_PulseID/RACSignal.h>
#import <ReactiveObjC_PulseID/RACStream.h>
#import <ReactiveObjC_PulseID/RACSubject.h>
#import <ReactiveObjC_PulseID/RACSubscriber.h>
#import <ReactiveObjC_PulseID/RACSubscriptingAssignmentTrampoline.h>
#import <ReactiveObjC_PulseID/RACTargetQueueScheduler.h>
#import <ReactiveObjC_PulseID/RACTestScheduler.h>
#import <ReactiveObjC_PulseID/RACTuple.h>
#import <ReactiveObjC_PulseID/RACUnit.h>

#if TARGET_OS_WATCH
#elif TARGET_OS_IOS || TARGET_OS_TV

	#if TARGET_OS_IOS
		#import <ReactiveObjC_PulseID/NSURLConnection+RACSupport.h>
	#endif
#elif TARGET_OS_MAC
	#import <ReactiveObjC_PulseID/NSControl+RACCommandSupport.h>
	#import <ReactiveObjC_PulseID/NSControl+RACTextSignalSupport.h>
	#import <ReactiveObjC_PulseID/NSObject+RACAppKitBindings.h>
	#import <ReactiveObjC_PulseID/NSText+RACSignalSupport.h>
	#import <ReactiveObjC_PulseID/NSURLConnection+RACSupport.h>
#endif
