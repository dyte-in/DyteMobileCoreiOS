// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "DyteMobileCoreiOS",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "DyteiOSCore", targets: ["DyteiOSCoreTargets"]),
    ],
    dependencies: [
        .package(url: "https://github.com/dyte-in/DyteiOSSocketIO.git", revision: "0.1.4"),
        
    ],
    targets: [
        .binaryTarget(
            name: "WebRTC",
            url: "https://github.com/jitsi/webrtc/releases/download/v111.0.2/WebRTC.xcframework.zip",
            checksum: "5033f23040628e76baa3a9c83c28d89e86ce8127a5a83b5b7d077ede24182b07"
        ),
        .binaryTarget(
            name: "DyteiOSCore",
                        url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.6.0.zip",
                        checksum: "7b3b683d2dd05a3ec6be86331d8387aa421c5eaa330bb929cb5a6142ddaa7cca"
        ),
        .target(
            name: "DyteiOSCoreTargets",
            dependencies: [
                .target(name: "DyteiOSCore"),
                .target(name: "WebRTC"),
                .product(name: "DyteiOSSocketIO", package: "DyteiOSSocketIO"),
            ],
            path: "Sources/Wrapper"
        )
    ]
)

