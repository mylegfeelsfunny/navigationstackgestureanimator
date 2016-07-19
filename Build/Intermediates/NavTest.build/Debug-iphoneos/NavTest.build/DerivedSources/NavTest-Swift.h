// Generated by Apple Swift version 2.1.1 (swiftlang-700.1.101.15 clang-700.1.81)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;
@class NSObject;

SWIFT_CLASS("_TtC7NavTest11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * __nullable window;
- (BOOL)application:(UIApplication * __nonnull)application didFinishLaunchingWithOptions:(NSDictionary * __nullable)launchOptions;
- (void)applicationWillResignActive:(UIApplication * __nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * __nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * __nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * __nonnull)application;
- (void)applicationWillTerminate:(UIApplication * __nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIPercentDrivenInteractiveTransition;
@class UIGestureRecognizer;
@class UINavigationController;
@class UIPanGestureRecognizer;
@class UIViewController;
@protocol UIViewControllerAnimatedTransitioning;
@protocol UIViewControllerInteractiveTransitioning;

SWIFT_CLASS("_TtC7NavTest16GestureCollector")
@interface GestureCollector : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
@property (nonatomic, weak) UINavigationController * __null_unspecified navigationController;
@property (nonatomic, strong) UIPercentDrivenInteractiveTransition * __nullable interactionController;
@property (nonatomic, weak) id <UIViewControllerAnimatedTransitioning> __null_unspecified animator;
@property (nonatomic, strong) UIGestureRecognizer * __null_unspecified gs;
- (nonnull instancetype)initWithNav:(UINavigationController * __nonnull)nav OBJC_DESIGNATED_INITIALIZER;
- (void)enable;
- (void)disable;
- (void)denyGestures;
- (void)acceptGestures;
- (void)untie;
@property (nonatomic, readonly, strong) UIGestureRecognizer * __nonnull gestureRecognizer;
- (void)addToNavigationView;
- (void)gestureFired:(UIPanGestureRecognizer * __nonnull)recognizer;
- (void)beginInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (void)updateInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (void)endInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (id <UIViewControllerAnimatedTransitioning> __nullable)animatorWithAnimationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController * __nonnull)fromVC toViewController:(UIViewController * __nonnull)toVC;
- (id <UIViewControllerAnimatedTransitioning> __nullable)animatorForPop:(UIViewController * __nonnull)fromVC;
- (id <UIViewControllerAnimatedTransitioning> __nullable)animatorForPush:(UIViewController * __nonnull)fromVC;
- (void)popViewController;
- (void)pushViewController;
- (id <UIViewControllerAnimatedTransitioning> __nullable)navigationController:(UINavigationController * __nonnull)navigationController animationControllerForOperation:(UINavigationControllerOperation)operation fromViewController:(UIViewController * __nonnull)fromVC toViewController:(UIViewController * __nonnull)toVC;
- (id <UIViewControllerInteractiveTransitioning> __nullable)navigationController:(UINavigationController * __nonnull)navigationController interactionControllerForAnimationController:(id <UIViewControllerAnimatedTransitioning> __nonnull)animationController;
- (BOOL)gestureRecognizer:(UIGestureRecognizer * __nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * __nonnull)otherGestureRecognizer;
@end


SWIFT_CLASS("_TtC7NavTest29HorizontalPanGestureNavigator")
@interface HorizontalPanGestureNavigator : GestureCollector
@property (nonatomic, readonly, strong) UIGestureRecognizer * __nonnull gestureRecognizer;
@property (nonatomic) BOOL isPopping;
- (void)beginInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (void)updateInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (void)endInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (nonnull instancetype)initWithNav:(UINavigationController * __nonnull)nav OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC7NavTest24NavigationViewController")
@interface NavigationViewController : UINavigationController
@property (nonatomic, readonly) BOOL isVertical;
@property (nonatomic, strong) GestureCollector * __nullable gestureCollector;
- (void)viewDidLoad;
- (void)toggleGestures;
- (nonnull instancetype)initWithNavigationBarClass:(Class __nullable)navigationBarClass toolbarClass:(Class __nullable)toolbarClass OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithRootViewController:(UIViewController * __nonnull)rootViewController OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@protocol UIViewControllerContextTransitioning;

SWIFT_CLASS("_TtC7NavTest16PopRightAnimator")
@interface PopRightAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, strong) GestureCollector * __nullable gestureCollector;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest14PopTopAnimator")
@interface PopTopAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, strong) GestureCollector * __nullable gestureCollector;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest18PushBottomAnimator")
@interface PushBottomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, strong) GestureCollector * __nullable gestureCollector;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest16PushLeftAnimator")
@interface PushLeftAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, strong) GestureCollector * __nullable gestureCollector;
- (NSTimeInterval)transitionDuration:(id <UIViewControllerContextTransitioning> __nullable)context;
- (void)animateTransition:(id <UIViewControllerContextTransitioning> __nonnull)context;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest27VerticalPanGestureNavigator")
@interface VerticalPanGestureNavigator : GestureCollector
@property (nonatomic, readonly, strong) UIGestureRecognizer * __nonnull gestureRecognizer;
@property (nonatomic) BOOL isPopping;
- (void)beginInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (void)updateInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (void)endInteractiveTransition:(UIPanGestureRecognizer * __nonnull)recognizer;
- (nonnull instancetype)initWithNav:(UINavigationController * __nonnull)nav OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;

SWIFT_CLASS("_TtC7NavTest14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, strong) IBOutlet UIButton * __nullable navdirectionButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
@property (nonatomic, readonly, strong) NavigationViewController * __nullable gestureNavigationController;
- (IBAction)toggleNav;
- (id <UIViewControllerAnimatedTransitioning> __nullable)getPushAnimator;
- (id <UIViewControllerAnimatedTransitioning> __nullable)getPopAnimator;
- (void)updateButton;
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest17ViewControllerPop")
@interface ViewControllerPop : ViewController
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest18ViewControllerPush")
@interface ViewControllerPush : ViewController
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC7NavTest21ViewControllerPushPop")
@interface ViewControllerPushPop : ViewController
- (nonnull instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop