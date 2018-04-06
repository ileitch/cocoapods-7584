@import Alamofire; // This is the culprit!

@protocol SomeProtocol <NSObject>
- (void)someMethod;
@end
