/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSProxy.h>


@interface NSInvocationReflector : NSProxy {
	id _target;
}
-(id)initWithTarget:(id)target;
-(void)dealloc;
-(void)forwardInvocation:(NSInvocation*)invocation;
-(NSMethodSignature*)methodSignatureForSelector:(SEL)selector;
@end

extern NSInvocationReflector* NSInvocationOf(id target);