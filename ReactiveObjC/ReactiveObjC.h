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

#import <PulseReactiveC/EXTKeyPathCoding.h>
#import <PulseReactiveC/EXTScope.h>
#import <PulseReactiveC/NSArray+RACSequenceAdditions.h>
#import <PulseReactiveC/NSData+RACSupport.h>
#import <PulseReactiveC/NSDictionary+RACSequenceAdditions.h>
#import <PulseReactiveC/NSEnumerator+RACSequenceAdditions.h>
#import <PulseReactiveC/NSFileHandle+RACSupport.h>
#import <PulseReactiveC/NSNotificationCenter+RACSupport.h>
#import <PulseReactiveC/NSObject+RACDeallocating.h>
#import <PulseReactiveC/NSObject+RACLifting.h>
#import <PulseReactiveC/NSObject+RACPropertySubscribing.h>
#import <PulseReactiveC/NSObject+RACSelectorSignal.h>
#import <PulseReactiveC/NSOrderedSet+RACSequenceAdditions.h>
#import <PulseReactiveC/NSSet+RACSequenceAdditions.h>
#import <PulseReactiveC/NSString+RACSequenceAdditions.h>
#import <PulseReactiveC/NSString+RACSupport.h>
#import <PulseReactiveC/NSIndexSet+RACSequenceAdditions.h>
#import <PulseReactiveC/NSUserDefaults+RACSupport.h>
#import <PulseReactiveC/RACBehaviorSubject.h>
#import <PulseReactiveC/RACChannel.h>
#import <PulseReactiveC/RACCommand.h>
#import <PulseReactiveC/RACCompoundDisposable.h>
#import <PulseReactiveC/RACDelegateProxy.h>
#import <PulseReactiveC/RACDisposable.h>
#import <PulseReactiveC/RACEvent.h>
#import <PulseReactiveC/RACGroupedSignal.h>
#import <PulseReactiveC/RACKVOChannel.h>
#import <PulseReactiveC/RACMulticastConnection.h>
#import <PulseReactiveC/RACQueueScheduler.h>
#import <PulseReactiveC/RACQueueScheduler+Subclass.h>
#import <PulseReactiveC/RACReplaySubject.h>
#import <PulseReactiveC/RACScheduler.h>
#import <PulseReactiveC/RACScheduler+Subclass.h>
#import <PulseReactiveC/RACScopedDisposable.h>
#import <PulseReactiveC/RACSequence.h>
#import <PulseReactiveC/RACSerialDisposable.h>
#import <PulseReactiveC/RACSignal+Operations.h>
#import <PulseReactiveC/RACSignal.h>
#import <PulseReactiveC/RACStream.h>
#import <PulseReactiveC/RACSubject.h>
#import <PulseReactiveC/RACSubscriber.h>
#import <PulseReactiveC/RACSubscriptingAssignmentTrampoline.h>
#import <PulseReactiveC/RACTargetQueueScheduler.h>
#import <PulseReactiveC/RACTestScheduler.h>
#import <PulseReactiveC/RACTuple.h>
#import <PulseReactiveC/RACUnit.h>

#if TARGET_OS_WATCH
#elif TARGET_OS_IOS || TARGET_OS_TV

	#if TARGET_OS_IOS
		#import <PulseReactiveC/NSURLConnection+RACSupport.h>
	#endif
#elif TARGET_OS_MAC
	#import <PulseReactiveC/NSControl+RACCommandSupport.h>
	#import <PulseReactiveC/NSControl+RACTextSignalSupport.h>
	#import <PulseReactiveC/NSObject+RACAppKitBindings.h>
	#import <PulseReactiveC/NSText+RACSignalSupport.h>
	#import <PulseReactiveC/NSURLConnection+RACSupport.h>
#endif
