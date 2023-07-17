// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "DyteMobileCoreiOS",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "DyteiOSCore", targets: ["DyteiOSCore", "WebRTC", "DyteiOSSocketIO", "Starscream"]),
    ],
    targets: [
        .binaryTarget(
            name: "WebRTC",
            url: "https://github.com/jitsi/webrtc/releases/download/v111.0.2/WebRTC.xcframework.zip",
            checksum: "5033f23040628e76baa3a9c83c28d89e86ce8127a5a83b5b7d077ede24182b07"
        ),
        .binaryTarget(
            name: "DyteiOSCore",
            url: "https://github.com/dyte-in/DyteMobileCoreiOS/archive/refs/tags/0.6.3.zip",
            checksum: "27de7fe01dd91df9fb1cfb721e1e57835b8c9c4de50ee39b47e7e06d77bc579e"
        ),
        .binaryTarget(
            name: "DyteiOSSocketIO",
            url: "https://github.com/dyte-in/DyteiOSSocketIO/archive/refs/tags/0.1.3.zip",
            checksum: "ca0ffe1930f5d5f472abb4966b2b814489b463399fb7aa757b2ab8bd3570048e"
        ),
        .binaryTarget(
            name: "Starscream",
            url: "https://github.com/dyte-in/DyteStarscream/archive/refs/tags/0.0.1.zip",
            checksum: "8aa8a8078b74aa4dcb86bf27ce2b46ef51b5e5f731226cd30fbd83ac5d1e633f"
        )
    ]
)

