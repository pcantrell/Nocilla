#import <Foundation/Foundation.h>

@class LSStubResponse;
@class LSStubResponseDSL;

@protocol LSHTTPBody;

typedef LSStubResponseDSL * _Nonnull (^ResponseWithBodyMethod)(_Nullable id<LSHTTPBody>);
typedef LSStubResponseDSL * _Nonnull (^ResponseWithHeaderMethod)(NSString * _Nonnull, NSString * _Nullable);
typedef LSStubResponseDSL * _Nonnull (^ResponseWithHeadersMethod)(NSDictionary * _Nonnull);
typedef LSStubResponseDSL * _Nonnull (^ResponseVoidMethod)();

@interface LSStubResponseDSL : NSObject
- (id _Nonnull)initWithResponse:(LSStubResponse * _Nonnull)response;

@property (nonatomic, strong, readonly) _Nonnull ResponseWithHeaderMethod withHeader;
@property (nonatomic, strong, readonly) _Nonnull ResponseWithHeadersMethod withHeaders;
@property (nonatomic, strong, readonly) _Nonnull ResponseWithBodyMethod withBody;

@property (nonatomic, strong, readonly) _Nonnull ResponseVoidMethod delay;
@property (nonatomic, strong, readonly) _Nonnull ResponseVoidMethod go;

@end
