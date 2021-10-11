/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
struct VkExtent2D
{
	uint32_t	width;
	uint32_t	height;
};

struct VkExtent3D
{
	uint32_t	width;
	uint32_t	height;
	uint32_t	depth;
};

struct VkOffset2D
{
	int32_t	x;
	int32_t	y;
};

struct VkOffset3D
{
	int32_t	x;
	int32_t	y;
	int32_t	z;
};

struct VkRect2D
{
	VkOffset2D	offset;
	VkExtent2D	extent;
};

struct VkBaseInStructure
{
	VkStructureType					sType;
	const struct VkBaseInStructure*	pNext;
};

struct VkBaseOutStructure
{
	VkStructureType				sType;
	struct VkBaseOutStructure*	pNext;
};

struct VkBufferMemoryBarrier
{
	VkStructureType	sType;
	const void*		pNext;
	VkAccessFlags	srcAccessMask;
	VkAccessFlags	dstAccessMask;
	uint32_t		srcQueueFamilyIndex;
	uint32_t		dstQueueFamilyIndex;
	VkBuffer		buffer;
	VkDeviceSize	offset;
	VkDeviceSize	size;
};

struct VkDispatchIndirectCommand
{
	uint32_t	x;
	uint32_t	y;
	uint32_t	z;
};

struct VkDrawIndexedIndirectCommand
{
	uint32_t	indexCount;
	uint32_t	instanceCount;
	uint32_t	firstIndex;
	int32_t		vertexOffset;
	uint32_t	firstInstance;
};

struct VkDrawIndirectCommand
{
	uint32_t	vertexCount;
	uint32_t	instanceCount;
	uint32_t	firstVertex;
	uint32_t	firstInstance;
};

struct VkImageSubresourceRange
{
	VkImageAspectFlags	aspectMask;
	uint32_t			baseMipLevel;
	uint32_t			levelCount;
	uint32_t			baseArrayLayer;
	uint32_t			layerCount;
};

struct VkImageMemoryBarrier
{
	VkStructureType			sType;
	const void*				pNext;
	VkAccessFlags			srcAccessMask;
	VkAccessFlags			dstAccessMask;
	VkImageLayout			oldLayout;
	VkImageLayout			newLayout;
	uint32_t				srcQueueFamilyIndex;
	uint32_t				dstQueueFamilyIndex;
	VkImage					image;
	VkImageSubresourceRange	subresourceRange;
};

struct VkMemoryBarrier
{
	VkStructureType	sType;
	const void*		pNext;
	VkAccessFlags	srcAccessMask;
	VkAccessFlags	dstAccessMask;
};

struct VkPipelineCacheHeaderVersionOne
{
	uint32_t						headerSize;
	VkPipelineCacheHeaderVersion	headerVersion;
	uint32_t						vendorID;
	uint32_t						deviceID;
	uint8_t							pipelineCacheUUID[VK_UUID_SIZE];
};

struct VkAllocationCallbacks
{
	void*									pUserData;
	PFN_vkAllocationFunction				pfnAllocation;
	PFN_vkReallocationFunction				pfnReallocation;
	PFN_vkFreeFunction						pfnFree;
	PFN_vkInternalAllocationNotification	pfnInternalAllocation;
	PFN_vkInternalFreeNotification			pfnInternalFree;
};

struct VkApplicationInfo
{
	VkStructureType	sType;
	const void*		pNext;
	const char*		pApplicationName;
	uint32_t		applicationVersion;
	const char*		pEngineName;
	uint32_t		engineVersion;
	uint32_t		apiVersion;
};

struct VkFormatProperties
{
	VkFormatFeatureFlags	linearTilingFeatures;
	VkFormatFeatureFlags	optimalTilingFeatures;
	VkFormatFeatureFlags	bufferFeatures;
};

struct VkImageFormatProperties
{
	VkExtent3D			maxExtent;
	uint32_t			maxMipLevels;
	uint32_t			maxArrayLayers;
	VkSampleCountFlags	sampleCounts;
	VkDeviceSize		maxResourceSize;
};

struct VkInstanceCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkInstanceCreateFlags		flags;
	const VkApplicationInfo*	pApplicationInfo;
	uint32_t					enabledLayerCount;
	const char* const*			ppEnabledLayerNames;
	uint32_t					enabledExtensionCount;
	const char* const*			ppEnabledExtensionNames;
};

struct VkMemoryHeap
{
	VkDeviceSize		size;
	VkMemoryHeapFlags	flags;
};

struct VkMemoryType
{
	VkMemoryPropertyFlags	propertyFlags;
	uint32_t				heapIndex;
};

struct VkPhysicalDeviceFeatures
{
	VkBool32	robustBufferAccess;
	VkBool32	fullDrawIndexUint32;
	VkBool32	imageCubeArray;
	VkBool32	independentBlend;
	VkBool32	geometryShader;
	VkBool32	tessellationShader;
	VkBool32	sampleRateShading;
	VkBool32	dualSrcBlend;
	VkBool32	logicOp;
	VkBool32	multiDrawIndirect;
	VkBool32	drawIndirectFirstInstance;
	VkBool32	depthClamp;
	VkBool32	depthBiasClamp;
	VkBool32	fillModeNonSolid;
	VkBool32	depthBounds;
	VkBool32	wideLines;
	VkBool32	largePoints;
	VkBool32	alphaToOne;
	VkBool32	multiViewport;
	VkBool32	samplerAnisotropy;
	VkBool32	textureCompressionETC2;
	VkBool32	textureCompressionASTC_LDR;
	VkBool32	textureCompressionBC;
	VkBool32	occlusionQueryPrecise;
	VkBool32	pipelineStatisticsQuery;
	VkBool32	vertexPipelineStoresAndAtomics;
	VkBool32	fragmentStoresAndAtomics;
	VkBool32	shaderTessellationAndGeometryPointSize;
	VkBool32	shaderImageGatherExtended;
	VkBool32	shaderStorageImageExtendedFormats;
	VkBool32	shaderStorageImageMultisample;
	VkBool32	shaderStorageImageReadWithoutFormat;
	VkBool32	shaderStorageImageWriteWithoutFormat;
	VkBool32	shaderUniformBufferArrayDynamicIndexing;
	VkBool32	shaderSampledImageArrayDynamicIndexing;
	VkBool32	shaderStorageBufferArrayDynamicIndexing;
	VkBool32	shaderStorageImageArrayDynamicIndexing;
	VkBool32	shaderClipDistance;
	VkBool32	shaderCullDistance;
	VkBool32	shaderFloat64;
	VkBool32	shaderInt64;
	VkBool32	shaderInt16;
	VkBool32	shaderResourceResidency;
	VkBool32	shaderResourceMinLod;
	VkBool32	sparseBinding;
	VkBool32	sparseResidencyBuffer;
	VkBool32	sparseResidencyImage2D;
	VkBool32	sparseResidencyImage3D;
	VkBool32	sparseResidency2Samples;
	VkBool32	sparseResidency4Samples;
	VkBool32	sparseResidency8Samples;
	VkBool32	sparseResidency16Samples;
	VkBool32	sparseResidencyAliased;
	VkBool32	variableMultisampleRate;
	VkBool32	inheritedQueries;
};

struct VkPhysicalDeviceLimits
{
	uint32_t			maxImageDimension1D;
	uint32_t			maxImageDimension2D;
	uint32_t			maxImageDimension3D;
	uint32_t			maxImageDimensionCube;
	uint32_t			maxImageArrayLayers;
	uint32_t			maxTexelBufferElements;
	uint32_t			maxUniformBufferRange;
	uint32_t			maxStorageBufferRange;
	uint32_t			maxPushConstantsSize;
	uint32_t			maxMemoryAllocationCount;
	uint32_t			maxSamplerAllocationCount;
	VkDeviceSize		bufferImageGranularity;
	VkDeviceSize		sparseAddressSpaceSize;
	uint32_t			maxBoundDescriptorSets;
	uint32_t			maxPerStageDescriptorSamplers;
	uint32_t			maxPerStageDescriptorUniformBuffers;
	uint32_t			maxPerStageDescriptorStorageBuffers;
	uint32_t			maxPerStageDescriptorSampledImages;
	uint32_t			maxPerStageDescriptorStorageImages;
	uint32_t			maxPerStageDescriptorInputAttachments;
	uint32_t			maxPerStageResources;
	uint32_t			maxDescriptorSetSamplers;
	uint32_t			maxDescriptorSetUniformBuffers;
	uint32_t			maxDescriptorSetUniformBuffersDynamic;
	uint32_t			maxDescriptorSetStorageBuffers;
	uint32_t			maxDescriptorSetStorageBuffersDynamic;
	uint32_t			maxDescriptorSetSampledImages;
	uint32_t			maxDescriptorSetStorageImages;
	uint32_t			maxDescriptorSetInputAttachments;
	uint32_t			maxVertexInputAttributes;
	uint32_t			maxVertexInputBindings;
	uint32_t			maxVertexInputAttributeOffset;
	uint32_t			maxVertexInputBindingStride;
	uint32_t			maxVertexOutputComponents;
	uint32_t			maxTessellationGenerationLevel;
	uint32_t			maxTessellationPatchSize;
	uint32_t			maxTessellationControlPerVertexInputComponents;
	uint32_t			maxTessellationControlPerVertexOutputComponents;
	uint32_t			maxTessellationControlPerPatchOutputComponents;
	uint32_t			maxTessellationControlTotalOutputComponents;
	uint32_t			maxTessellationEvaluationInputComponents;
	uint32_t			maxTessellationEvaluationOutputComponents;
	uint32_t			maxGeometryShaderInvocations;
	uint32_t			maxGeometryInputComponents;
	uint32_t			maxGeometryOutputComponents;
	uint32_t			maxGeometryOutputVertices;
	uint32_t			maxGeometryTotalOutputComponents;
	uint32_t			maxFragmentInputComponents;
	uint32_t			maxFragmentOutputAttachments;
	uint32_t			maxFragmentDualSrcAttachments;
	uint32_t			maxFragmentCombinedOutputResources;
	uint32_t			maxComputeSharedMemorySize;
	uint32_t			maxComputeWorkGroupCount[3];
	uint32_t			maxComputeWorkGroupInvocations;
	uint32_t			maxComputeWorkGroupSize[3];
	uint32_t			subPixelPrecisionBits;
	uint32_t			subTexelPrecisionBits;
	uint32_t			mipmapPrecisionBits;
	uint32_t			maxDrawIndexedIndexValue;
	uint32_t			maxDrawIndirectCount;
	float				maxSamplerLodBias;
	float				maxSamplerAnisotropy;
	uint32_t			maxViewports;
	uint32_t			maxViewportDimensions[2];
	float				viewportBoundsRange[2];
	uint32_t			viewportSubPixelBits;
	size_t				minMemoryMapAlignment;
	VkDeviceSize		minTexelBufferOffsetAlignment;
	VkDeviceSize		minUniformBufferOffsetAlignment;
	VkDeviceSize		minStorageBufferOffsetAlignment;
	int32_t				minTexelOffset;
	uint32_t			maxTexelOffset;
	int32_t				minTexelGatherOffset;
	uint32_t			maxTexelGatherOffset;
	float				minInterpolationOffset;
	float				maxInterpolationOffset;
	uint32_t			subPixelInterpolationOffsetBits;
	uint32_t			maxFramebufferWidth;
	uint32_t			maxFramebufferHeight;
	uint32_t			maxFramebufferLayers;
	VkSampleCountFlags	framebufferColorSampleCounts;
	VkSampleCountFlags	framebufferDepthSampleCounts;
	VkSampleCountFlags	framebufferStencilSampleCounts;
	VkSampleCountFlags	framebufferNoAttachmentsSampleCounts;
	uint32_t			maxColorAttachments;
	VkSampleCountFlags	sampledImageColorSampleCounts;
	VkSampleCountFlags	sampledImageIntegerSampleCounts;
	VkSampleCountFlags	sampledImageDepthSampleCounts;
	VkSampleCountFlags	sampledImageStencilSampleCounts;
	VkSampleCountFlags	storageImageSampleCounts;
	uint32_t			maxSampleMaskWords;
	VkBool32			timestampComputeAndGraphics;
	float				timestampPeriod;
	uint32_t			maxClipDistances;
	uint32_t			maxCullDistances;
	uint32_t			maxCombinedClipAndCullDistances;
	uint32_t			discreteQueuePriorities;
	float				pointSizeRange[2];
	float				lineWidthRange[2];
	float				pointSizeGranularity;
	float				lineWidthGranularity;
	VkBool32			strictLines;
	VkBool32			standardSampleLocations;
	VkDeviceSize		optimalBufferCopyOffsetAlignment;
	VkDeviceSize		optimalBufferCopyRowPitchAlignment;
	VkDeviceSize		nonCoherentAtomSize;
};

struct VkPhysicalDeviceMemoryProperties
{
	uint32_t		memoryTypeCount;
	VkMemoryType	memoryTypes[VK_MAX_MEMORY_TYPES];
	uint32_t		memoryHeapCount;
	VkMemoryHeap	memoryHeaps[VK_MAX_MEMORY_HEAPS];
};

struct VkPhysicalDeviceSparseProperties
{
	VkBool32	residencyStandard2DBlockShape;
	VkBool32	residencyStandard2DMultisampleBlockShape;
	VkBool32	residencyStandard3DBlockShape;
	VkBool32	residencyAlignedMipSize;
	VkBool32	residencyNonResidentStrict;
};

struct VkPhysicalDeviceProperties
{
	uint32_t							apiVersion;
	uint32_t							driverVersion;
	uint32_t							vendorID;
	uint32_t							deviceID;
	VkPhysicalDeviceType				deviceType;
	char								deviceName[VK_MAX_PHYSICAL_DEVICE_NAME_SIZE];
	uint8_t								pipelineCacheUUID[VK_UUID_SIZE];
	VkPhysicalDeviceLimits				limits;
	VkPhysicalDeviceSparseProperties	sparseProperties;
};

struct VkQueueFamilyProperties
{
	VkQueueFlags	queueFlags;
	uint32_t		queueCount;
	uint32_t		timestampValidBits;
	VkExtent3D		minImageTransferGranularity;
};

struct VkDeviceQueueCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkDeviceQueueCreateFlags	flags;
	uint32_t					queueFamilyIndex;
	uint32_t					queueCount;
	const float*				pQueuePriorities;
};

struct VkDeviceCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkDeviceCreateFlags				flags;
	uint32_t						queueCreateInfoCount;
	const VkDeviceQueueCreateInfo*	pQueueCreateInfos;
	uint32_t						enabledLayerCount;
	const char* const*				ppEnabledLayerNames;
	uint32_t						enabledExtensionCount;
	const char* const*				ppEnabledExtensionNames;
	const VkPhysicalDeviceFeatures*	pEnabledFeatures;
};

struct VkExtensionProperties
{
	char		extensionName[VK_MAX_EXTENSION_NAME_SIZE];
	uint32_t	specVersion;
};

struct VkLayerProperties
{
	char		layerName[VK_MAX_EXTENSION_NAME_SIZE];
	uint32_t	specVersion;
	uint32_t	implementationVersion;
	char		description[VK_MAX_DESCRIPTION_SIZE];
};

struct VkSubmitInfo
{
	VkStructureType				sType;
	const void*					pNext;
	uint32_t					waitSemaphoreCount;
	const VkSemaphore*			pWaitSemaphores;
	const VkPipelineStageFlags*	pWaitDstStageMask;
	uint32_t					commandBufferCount;
	const VkCommandBuffer*		pCommandBuffers;
	uint32_t					signalSemaphoreCount;
	const VkSemaphore*			pSignalSemaphores;
};

struct VkMappedMemoryRange
{
	VkStructureType	sType;
	const void*		pNext;
	VkDeviceMemory	memory;
	VkDeviceSize	offset;
	VkDeviceSize	size;
};

struct VkMemoryAllocateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkDeviceSize	allocationSize;
	uint32_t		memoryTypeIndex;
};

struct VkMemoryRequirements
{
	VkDeviceSize	size;
	VkDeviceSize	alignment;
	uint32_t		memoryTypeBits;
};

struct VkSparseMemoryBind
{
	VkDeviceSize			resourceOffset;
	VkDeviceSize			size;
	VkDeviceMemory			memory;
	VkDeviceSize			memoryOffset;
	VkSparseMemoryBindFlags	flags;
};

struct VkSparseBufferMemoryBindInfo
{
	VkBuffer					buffer;
	uint32_t					bindCount;
	const VkSparseMemoryBind*	pBinds;
};

struct VkSparseImageOpaqueMemoryBindInfo
{
	VkImage						image;
	uint32_t					bindCount;
	const VkSparseMemoryBind*	pBinds;
};

struct VkImageSubresource
{
	VkImageAspectFlags	aspectMask;
	uint32_t			mipLevel;
	uint32_t			arrayLayer;
};

struct VkSparseImageMemoryBind
{
	VkImageSubresource		subresource;
	VkOffset3D				offset;
	VkExtent3D				extent;
	VkDeviceMemory			memory;
	VkDeviceSize			memoryOffset;
	VkSparseMemoryBindFlags	flags;
};

struct VkSparseImageMemoryBindInfo
{
	VkImage							image;
	uint32_t						bindCount;
	const VkSparseImageMemoryBind*	pBinds;
};

struct VkBindSparseInfo
{
	VkStructureType								sType;
	const void*									pNext;
	uint32_t									waitSemaphoreCount;
	const VkSemaphore*							pWaitSemaphores;
	uint32_t									bufferBindCount;
	const VkSparseBufferMemoryBindInfo*			pBufferBinds;
	uint32_t									imageOpaqueBindCount;
	const VkSparseImageOpaqueMemoryBindInfo*	pImageOpaqueBinds;
	uint32_t									imageBindCount;
	const VkSparseImageMemoryBindInfo*			pImageBinds;
	uint32_t									signalSemaphoreCount;
	const VkSemaphore*							pSignalSemaphores;
};

struct VkSparseImageFormatProperties
{
	VkImageAspectFlags			aspectMask;
	VkExtent3D					imageGranularity;
	VkSparseImageFormatFlags	flags;
};

struct VkSparseImageMemoryRequirements
{
	VkSparseImageFormatProperties	formatProperties;
	uint32_t						imageMipTailFirstLod;
	VkDeviceSize					imageMipTailSize;
	VkDeviceSize					imageMipTailOffset;
	VkDeviceSize					imageMipTailStride;
};

struct VkFenceCreateInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkFenceCreateFlags	flags;
};

struct VkSemaphoreCreateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkSemaphoreCreateFlags	flags;
};

struct VkEventCreateInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkEventCreateFlags	flags;
};

struct VkQueryPoolCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkQueryPoolCreateFlags			flags;
	VkQueryType						queryType;
	uint32_t						queryCount;
	VkQueryPipelineStatisticFlags	pipelineStatistics;
};

struct VkBufferCreateInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkBufferCreateFlags	flags;
	VkDeviceSize		size;
	VkBufferUsageFlags	usage;
	VkSharingMode		sharingMode;
	uint32_t			queueFamilyIndexCount;
	const uint32_t*		pQueueFamilyIndices;
};

struct VkBufferViewCreateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkBufferViewCreateFlags	flags;
	VkBuffer				buffer;
	VkFormat				format;
	VkDeviceSize			offset;
	VkDeviceSize			range;
};

struct VkImageCreateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkImageCreateFlags		flags;
	VkImageType				imageType;
	VkFormat				format;
	VkExtent3D				extent;
	uint32_t				mipLevels;
	uint32_t				arrayLayers;
	VkSampleCountFlagBits	samples;
	VkImageTiling			tiling;
	VkImageUsageFlags		usage;
	VkSharingMode			sharingMode;
	uint32_t				queueFamilyIndexCount;
	const uint32_t*			pQueueFamilyIndices;
	VkImageLayout			initialLayout;
};

struct VkSubresourceLayout
{
	VkDeviceSize	offset;
	VkDeviceSize	size;
	VkDeviceSize	rowPitch;
	VkDeviceSize	arrayPitch;
	VkDeviceSize	depthPitch;
};

struct VkComponentMapping
{
	VkComponentSwizzle	r;
	VkComponentSwizzle	g;
	VkComponentSwizzle	b;
	VkComponentSwizzle	a;
};

struct VkImageViewCreateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkImageViewCreateFlags	flags;
	VkImage					image;
	VkImageViewType			viewType;
	VkFormat				format;
	VkComponentMapping		components;
	VkImageSubresourceRange	subresourceRange;
};

struct VkShaderModuleCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkShaderModuleCreateFlags	flags;
	size_t						codeSize;
	const uint32_t*				pCode;
};

struct VkPipelineCacheCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkPipelineCacheCreateFlags	flags;
	size_t						initialDataSize;
	const void*					pInitialData;
};

struct VkSpecializationMapEntry
{
	uint32_t	constantID;
	uint32_t	offset;
	size_t		size;
};

struct VkSpecializationInfo
{
	uint32_t						mapEntryCount;
	const VkSpecializationMapEntry*	pMapEntries;
	size_t							dataSize;
	const void*						pData;
};

struct VkPipelineShaderStageCreateInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkPipelineShaderStageCreateFlags	flags;
	VkShaderStageFlagBits				stage;
	VkShaderModule						module;
	const char*							pName;
	const VkSpecializationInfo*			pSpecializationInfo;
};

struct VkComputePipelineCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkPipelineCreateFlags			flags;
	VkPipelineShaderStageCreateInfo	stage;
	VkPipelineLayout				layout;
	VkPipeline						basePipelineHandle;
	int32_t							basePipelineIndex;
};

struct VkVertexInputBindingDescription
{
	uint32_t			binding;
	uint32_t			stride;
	VkVertexInputRate	inputRate;
};

struct VkVertexInputAttributeDescription
{
	uint32_t	location;
	uint32_t	binding;
	VkFormat	format;
	uint32_t	offset;
};

struct VkPipelineVertexInputStateCreateInfo
{
	VkStructureType								sType;
	const void*									pNext;
	VkPipelineVertexInputStateCreateFlags		flags;
	uint32_t									vertexBindingDescriptionCount;
	const VkVertexInputBindingDescription*		pVertexBindingDescriptions;
	uint32_t									vertexAttributeDescriptionCount;
	const VkVertexInputAttributeDescription*	pVertexAttributeDescriptions;
};

struct VkPipelineInputAssemblyStateCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkPipelineInputAssemblyStateCreateFlags	flags;
	VkPrimitiveTopology						topology;
	VkBool32								primitiveRestartEnable;
};

struct VkPipelineTessellationStateCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkPipelineTessellationStateCreateFlags	flags;
	uint32_t								patchControlPoints;
};

struct VkViewport
{
	float	x;
	float	y;
	float	width;
	float	height;
	float	minDepth;
	float	maxDepth;
};

struct VkPipelineViewportStateCreateInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkPipelineViewportStateCreateFlags	flags;
	uint32_t							viewportCount;
	const VkViewport*					pViewports;
	uint32_t							scissorCount;
	const VkRect2D*						pScissors;
};

struct VkPipelineRasterizationStateCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkPipelineRasterizationStateCreateFlags	flags;
	VkBool32								depthClampEnable;
	VkBool32								rasterizerDiscardEnable;
	VkPolygonMode							polygonMode;
	VkCullModeFlags							cullMode;
	VkFrontFace								frontFace;
	VkBool32								depthBiasEnable;
	float									depthBiasConstantFactor;
	float									depthBiasClamp;
	float									depthBiasSlopeFactor;
	float									lineWidth;
};

struct VkPipelineMultisampleStateCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkPipelineMultisampleStateCreateFlags	flags;
	VkSampleCountFlagBits					rasterizationSamples;
	VkBool32								sampleShadingEnable;
	float									minSampleShading;
	const VkSampleMask*						pSampleMask;
	VkBool32								alphaToCoverageEnable;
	VkBool32								alphaToOneEnable;
};

struct VkStencilOpState
{
	VkStencilOp	failOp;
	VkStencilOp	passOp;
	VkStencilOp	depthFailOp;
	VkCompareOp	compareOp;
	uint32_t	compareMask;
	uint32_t	writeMask;
	uint32_t	reference;
};

struct VkPipelineDepthStencilStateCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkPipelineDepthStencilStateCreateFlags	flags;
	VkBool32								depthTestEnable;
	VkBool32								depthWriteEnable;
	VkCompareOp								depthCompareOp;
	VkBool32								depthBoundsTestEnable;
	VkBool32								stencilTestEnable;
	VkStencilOpState						front;
	VkStencilOpState						back;
	float									minDepthBounds;
	float									maxDepthBounds;
};

struct VkPipelineColorBlendAttachmentState
{
	VkBool32				blendEnable;
	VkBlendFactor			srcColorBlendFactor;
	VkBlendFactor			dstColorBlendFactor;
	VkBlendOp				colorBlendOp;
	VkBlendFactor			srcAlphaBlendFactor;
	VkBlendFactor			dstAlphaBlendFactor;
	VkBlendOp				alphaBlendOp;
	VkColorComponentFlags	colorWriteMask;
};

struct VkPipelineColorBlendStateCreateInfo
{
	VkStructureType								sType;
	const void*									pNext;
	VkPipelineColorBlendStateCreateFlags		flags;
	VkBool32									logicOpEnable;
	VkLogicOp									logicOp;
	uint32_t									attachmentCount;
	const VkPipelineColorBlendAttachmentState*	pAttachments;
	float										blendConstants[4];
};

struct VkPipelineDynamicStateCreateInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkPipelineDynamicStateCreateFlags	flags;
	uint32_t							dynamicStateCount;
	const VkDynamicState*				pDynamicStates;
};

struct VkGraphicsPipelineCreateInfo
{
	VkStructureType									sType;
	const void*										pNext;
	VkPipelineCreateFlags							flags;
	uint32_t										stageCount;
	const VkPipelineShaderStageCreateInfo*			pStages;
	const VkPipelineVertexInputStateCreateInfo*		pVertexInputState;
	const VkPipelineInputAssemblyStateCreateInfo*	pInputAssemblyState;
	const VkPipelineTessellationStateCreateInfo*	pTessellationState;
	const VkPipelineViewportStateCreateInfo*		pViewportState;
	const VkPipelineRasterizationStateCreateInfo*	pRasterizationState;
	const VkPipelineMultisampleStateCreateInfo*		pMultisampleState;
	const VkPipelineDepthStencilStateCreateInfo*	pDepthStencilState;
	const VkPipelineColorBlendStateCreateInfo*		pColorBlendState;
	const VkPipelineDynamicStateCreateInfo*			pDynamicState;
	VkPipelineLayout								layout;
	VkRenderPass									renderPass;
	uint32_t										subpass;
	VkPipeline										basePipelineHandle;
	int32_t											basePipelineIndex;
};

struct VkPushConstantRange
{
	VkShaderStageFlags	stageFlags;
	uint32_t			offset;
	uint32_t			size;
};

struct VkPipelineLayoutCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkPipelineLayoutCreateFlags		flags;
	uint32_t						setLayoutCount;
	const VkDescriptorSetLayout*	pSetLayouts;
	uint32_t						pushConstantRangeCount;
	const VkPushConstantRange*		pPushConstantRanges;
};

struct VkSamplerCreateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkSamplerCreateFlags	flags;
	VkFilter				magFilter;
	VkFilter				minFilter;
	VkSamplerMipmapMode		mipmapMode;
	VkSamplerAddressMode	addressModeU;
	VkSamplerAddressMode	addressModeV;
	VkSamplerAddressMode	addressModeW;
	float					mipLodBias;
	VkBool32				anisotropyEnable;
	float					maxAnisotropy;
	VkBool32				compareEnable;
	VkCompareOp				compareOp;
	float					minLod;
	float					maxLod;
	VkBorderColor			borderColor;
	VkBool32				unnormalizedCoordinates;
};

struct VkCopyDescriptorSet
{
	VkStructureType	sType;
	const void*		pNext;
	VkDescriptorSet	srcSet;
	uint32_t		srcBinding;
	uint32_t		srcArrayElement;
	VkDescriptorSet	dstSet;
	uint32_t		dstBinding;
	uint32_t		dstArrayElement;
	uint32_t		descriptorCount;
};

struct VkDescriptorBufferInfo
{
	VkBuffer		buffer;
	VkDeviceSize	offset;
	VkDeviceSize	range;
};

struct VkDescriptorImageInfo
{
	VkSampler		sampler;
	VkImageView		imageView;
	VkImageLayout	imageLayout;
};

struct VkDescriptorPoolSize
{
	VkDescriptorType	type;
	uint32_t			descriptorCount;
};

struct VkDescriptorPoolCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkDescriptorPoolCreateFlags	flags;
	uint32_t					maxSets;
	uint32_t					poolSizeCount;
	const VkDescriptorPoolSize*	pPoolSizes;
};

struct VkDescriptorSetAllocateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkDescriptorPool				descriptorPool;
	uint32_t						descriptorSetCount;
	const VkDescriptorSetLayout*	pSetLayouts;
};

struct VkDescriptorSetLayoutBinding
{
	uint32_t			binding;
	VkDescriptorType	descriptorType;
	uint32_t			descriptorCount;
	VkShaderStageFlags	stageFlags;
	const VkSampler*	pImmutableSamplers;
};

struct VkDescriptorSetLayoutCreateInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkDescriptorSetLayoutCreateFlags	flags;
	uint32_t							bindingCount;
	const VkDescriptorSetLayoutBinding*	pBindings;
};

struct VkWriteDescriptorSet
{
	VkStructureType					sType;
	const void*						pNext;
	VkDescriptorSet					dstSet;
	uint32_t						dstBinding;
	uint32_t						dstArrayElement;
	uint32_t						descriptorCount;
	VkDescriptorType				descriptorType;
	const VkDescriptorImageInfo*	pImageInfo;
	const VkDescriptorBufferInfo*	pBufferInfo;
	const VkBufferView*				pTexelBufferView;
};

struct VkAttachmentDescription
{
	VkAttachmentDescriptionFlags	flags;
	VkFormat						format;
	VkSampleCountFlagBits			samples;
	VkAttachmentLoadOp				loadOp;
	VkAttachmentStoreOp				storeOp;
	VkAttachmentLoadOp				stencilLoadOp;
	VkAttachmentStoreOp				stencilStoreOp;
	VkImageLayout					initialLayout;
	VkImageLayout					finalLayout;
};

struct VkAttachmentReference
{
	uint32_t		attachment;
	VkImageLayout	layout;
};

struct VkFramebufferCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkFramebufferCreateFlags	flags;
	VkRenderPass				renderPass;
	uint32_t					attachmentCount;
	const VkImageView*			pAttachments;
	uint32_t					width;
	uint32_t					height;
	uint32_t					layers;
};

struct VkSubpassDescription
{
	VkSubpassDescriptionFlags		flags;
	VkPipelineBindPoint				pipelineBindPoint;
	uint32_t						inputAttachmentCount;
	const VkAttachmentReference*	pInputAttachments;
	uint32_t						colorAttachmentCount;
	const VkAttachmentReference*	pColorAttachments;
	const VkAttachmentReference*	pResolveAttachments;
	const VkAttachmentReference*	pDepthStencilAttachment;
	uint32_t						preserveAttachmentCount;
	const uint32_t*					pPreserveAttachments;
};

struct VkSubpassDependency
{
	uint32_t				srcSubpass;
	uint32_t				dstSubpass;
	VkPipelineStageFlags	srcStageMask;
	VkPipelineStageFlags	dstStageMask;
	VkAccessFlags			srcAccessMask;
	VkAccessFlags			dstAccessMask;
	VkDependencyFlags		dependencyFlags;
};

struct VkRenderPassCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkRenderPassCreateFlags			flags;
	uint32_t						attachmentCount;
	const VkAttachmentDescription*	pAttachments;
	uint32_t						subpassCount;
	const VkSubpassDescription*		pSubpasses;
	uint32_t						dependencyCount;
	const VkSubpassDependency*		pDependencies;
};

struct VkCommandPoolCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkCommandPoolCreateFlags	flags;
	uint32_t					queueFamilyIndex;
};

struct VkCommandBufferAllocateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkCommandPool			commandPool;
	VkCommandBufferLevel	level;
	uint32_t				commandBufferCount;
};

struct VkCommandBufferInheritanceInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkRenderPass					renderPass;
	uint32_t						subpass;
	VkFramebuffer					framebuffer;
	VkBool32						occlusionQueryEnable;
	VkQueryControlFlags				queryFlags;
	VkQueryPipelineStatisticFlags	pipelineStatistics;
};

struct VkCommandBufferBeginInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkCommandBufferUsageFlags				flags;
	const VkCommandBufferInheritanceInfo*	pInheritanceInfo;
};

struct VkBufferCopy
{
	VkDeviceSize	srcOffset;
	VkDeviceSize	dstOffset;
	VkDeviceSize	size;
};

struct VkImageSubresourceLayers
{
	VkImageAspectFlags	aspectMask;
	uint32_t			mipLevel;
	uint32_t			baseArrayLayer;
	uint32_t			layerCount;
};

struct VkBufferImageCopy
{
	VkDeviceSize				bufferOffset;
	uint32_t					bufferRowLength;
	uint32_t					bufferImageHeight;
	VkImageSubresourceLayers	imageSubresource;
	VkOffset3D					imageOffset;
	VkExtent3D					imageExtent;
};

union VkClearColorValue
{
	float		float32[4];
	int32_t		int32[4];
	uint32_t	uint32[4];
};

struct VkClearDepthStencilValue
{
	float		depth;
	uint32_t	stencil;
};

union VkClearValue
{
	VkClearColorValue			color;
	VkClearDepthStencilValue	depthStencil;
};

struct VkClearAttachment
{
	VkImageAspectFlags	aspectMask;
	uint32_t			colorAttachment;
	VkClearValue		clearValue;
};

struct VkClearRect
{
	VkRect2D	rect;
	uint32_t	baseArrayLayer;
	uint32_t	layerCount;
};

struct VkImageBlit
{
	VkImageSubresourceLayers	srcSubresource;
	VkOffset3D					srcOffsets[2];
	VkImageSubresourceLayers	dstSubresource;
	VkOffset3D					dstOffsets[2];
};

struct VkImageCopy
{
	VkImageSubresourceLayers	srcSubresource;
	VkOffset3D					srcOffset;
	VkImageSubresourceLayers	dstSubresource;
	VkOffset3D					dstOffset;
	VkExtent3D					extent;
};

struct VkImageResolve
{
	VkImageSubresourceLayers	srcSubresource;
	VkOffset3D					srcOffset;
	VkImageSubresourceLayers	dstSubresource;
	VkOffset3D					dstOffset;
	VkExtent3D					extent;
};

struct VkRenderPassBeginInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkRenderPass		renderPass;
	VkFramebuffer		framebuffer;
	VkRect2D			renderArea;
	uint32_t			clearValueCount;
	const VkClearValue*	pClearValues;
};

struct VkPhysicalDeviceSubgroupProperties
{
	VkStructureType			sType;
	void*					pNext;
	uint32_t				subgroupSize;
	VkShaderStageFlags		supportedStages;
	VkSubgroupFeatureFlags	supportedOperations;
	VkBool32				quadOperationsInAllStages;
};

struct VkBindBufferMemoryInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkBuffer		buffer;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
};

struct VkBindImageMemoryInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkImage			image;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
};

struct VkPhysicalDevice16BitStorageFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		storageBuffer16BitAccess;
	VkBool32		uniformAndStorageBuffer16BitAccess;
	VkBool32		storagePushConstant16;
	VkBool32		storageInputOutput16;
};

struct VkMemoryDedicatedRequirements
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		prefersDedicatedAllocation;
	VkBool32		requiresDedicatedAllocation;
};

struct VkMemoryDedicatedAllocateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkImage			image;
	VkBuffer		buffer;
};

struct VkMemoryAllocateFlagsInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkMemoryAllocateFlags	flags;
	uint32_t				deviceMask;
};

struct VkDeviceGroupRenderPassBeginInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		deviceMask;
	uint32_t		deviceRenderAreaCount;
	const VkRect2D*	pDeviceRenderAreas;
};

struct VkDeviceGroupCommandBufferBeginInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		deviceMask;
};

struct VkDeviceGroupSubmitInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		waitSemaphoreCount;
	const uint32_t*	pWaitSemaphoreDeviceIndices;
	uint32_t		commandBufferCount;
	const uint32_t*	pCommandBufferDeviceMasks;
	uint32_t		signalSemaphoreCount;
	const uint32_t*	pSignalSemaphoreDeviceIndices;
};

struct VkDeviceGroupBindSparseInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		resourceDeviceIndex;
	uint32_t		memoryDeviceIndex;
};

struct VkBindBufferMemoryDeviceGroupInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		deviceIndexCount;
	const uint32_t*	pDeviceIndices;
};

struct VkBindImageMemoryDeviceGroupInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		deviceIndexCount;
	const uint32_t*	pDeviceIndices;
	uint32_t		splitInstanceBindRegionCount;
	const VkRect2D*	pSplitInstanceBindRegions;
};

struct VkPhysicalDeviceGroupProperties
{
	VkStructureType		sType;
	void*				pNext;
	uint32_t			physicalDeviceCount;
	VkPhysicalDevice	physicalDevices[VK_MAX_DEVICE_GROUP_SIZE];
	VkBool32			subsetAllocation;
};

struct VkDeviceGroupDeviceCreateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	uint32_t				physicalDeviceCount;
	const VkPhysicalDevice*	pPhysicalDevices;
};

struct VkBufferMemoryRequirementsInfo2
{
	VkStructureType	sType;
	const void*		pNext;
	VkBuffer		buffer;
};

struct VkImageMemoryRequirementsInfo2
{
	VkStructureType	sType;
	const void*		pNext;
	VkImage			image;
};

struct VkImageSparseMemoryRequirementsInfo2
{
	VkStructureType	sType;
	const void*		pNext;
	VkImage			image;
};

struct VkMemoryRequirements2
{
	VkStructureType			sType;
	void*					pNext;
	VkMemoryRequirements	memoryRequirements;
};

struct VkSparseImageMemoryRequirements2
{
	VkStructureType					sType;
	void*							pNext;
	VkSparseImageMemoryRequirements	memoryRequirements;
};

struct VkPhysicalDeviceFeatures2
{
	VkStructureType				sType;
	void*						pNext;
	VkPhysicalDeviceFeatures	features;
};

struct VkPhysicalDeviceProperties2
{
	VkStructureType				sType;
	void*						pNext;
	VkPhysicalDeviceProperties	properties;
};

struct VkFormatProperties2
{
	VkStructureType		sType;
	void*				pNext;
	VkFormatProperties	formatProperties;
};

struct VkImageFormatProperties2
{
	VkStructureType			sType;
	void*					pNext;
	VkImageFormatProperties	imageFormatProperties;
};

struct VkPhysicalDeviceImageFormatInfo2
{
	VkStructureType		sType;
	const void*			pNext;
	VkFormat			format;
	VkImageType			type;
	VkImageTiling		tiling;
	VkImageUsageFlags	usage;
	VkImageCreateFlags	flags;
};

struct VkQueueFamilyProperties2
{
	VkStructureType			sType;
	void*					pNext;
	VkQueueFamilyProperties	queueFamilyProperties;
};

struct VkPhysicalDeviceMemoryProperties2
{
	VkStructureType						sType;
	void*								pNext;
	VkPhysicalDeviceMemoryProperties	memoryProperties;
};

struct VkSparseImageFormatProperties2
{
	VkStructureType					sType;
	void*							pNext;
	VkSparseImageFormatProperties	properties;
};

struct VkPhysicalDeviceSparseImageFormatInfo2
{
	VkStructureType			sType;
	const void*				pNext;
	VkFormat				format;
	VkImageType				type;
	VkSampleCountFlagBits	samples;
	VkImageUsageFlags		usage;
	VkImageTiling			tiling;
};

struct VkPhysicalDevicePointClippingProperties
{
	VkStructureType			sType;
	void*					pNext;
	VkPointClippingBehavior	pointClippingBehavior;
};

struct VkInputAttachmentAspectReference
{
	uint32_t			subpass;
	uint32_t			inputAttachmentIndex;
	VkImageAspectFlags	aspectMask;
};

struct VkRenderPassInputAttachmentAspectCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								aspectReferenceCount;
	const VkInputAttachmentAspectReference*	pAspectReferences;
};

struct VkImageViewUsageCreateInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkImageUsageFlags	usage;
};

struct VkPipelineTessellationDomainOriginStateCreateInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkTessellationDomainOrigin	domainOrigin;
};

struct VkRenderPassMultiviewCreateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		subpassCount;
	const uint32_t*	pViewMasks;
	uint32_t		dependencyCount;
	const int32_t*	pViewOffsets;
	uint32_t		correlationMaskCount;
	const uint32_t*	pCorrelationMasks;
};

struct VkPhysicalDeviceMultiviewFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		multiview;
	VkBool32		multiviewGeometryShader;
	VkBool32		multiviewTessellationShader;
};

struct VkPhysicalDeviceMultiviewProperties
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxMultiviewViewCount;
	uint32_t		maxMultiviewInstanceIndex;
};

struct VkPhysicalDeviceVariablePointersFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		variablePointersStorageBuffer;
	VkBool32		variablePointers;
};

struct VkPhysicalDeviceProtectedMemoryFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		protectedMemory;
};

struct VkPhysicalDeviceProtectedMemoryProperties
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		protectedNoFault;
};

struct VkDeviceQueueInfo2
{
	VkStructureType				sType;
	const void*					pNext;
	VkDeviceQueueCreateFlags	flags;
	uint32_t					queueFamilyIndex;
	uint32_t					queueIndex;
};

struct VkProtectedSubmitInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		protectedSubmit;
};

struct VkSamplerYcbcrConversionCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkFormat						format;
	VkSamplerYcbcrModelConversion	ycbcrModel;
	VkSamplerYcbcrRange				ycbcrRange;
	VkComponentMapping				components;
	VkChromaLocation				xChromaOffset;
	VkChromaLocation				yChromaOffset;
	VkFilter						chromaFilter;
	VkBool32						forceExplicitReconstruction;
};

struct VkSamplerYcbcrConversionInfo
{
	VkStructureType				sType;
	const void*					pNext;
	VkSamplerYcbcrConversion	conversion;
};

struct VkBindImagePlaneMemoryInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkImageAspectFlagBits	planeAspect;
};

struct VkImagePlaneMemoryRequirementsInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkImageAspectFlagBits	planeAspect;
};

struct VkPhysicalDeviceSamplerYcbcrConversionFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		samplerYcbcrConversion;
};

struct VkSamplerYcbcrConversionImageFormatProperties
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		combinedImageSamplerDescriptorCount;
};

struct VkDescriptorUpdateTemplateEntry
{
	uint32_t			dstBinding;
	uint32_t			dstArrayElement;
	uint32_t			descriptorCount;
	VkDescriptorType	descriptorType;
	size_t				offset;
	size_t				stride;
};

struct VkDescriptorUpdateTemplateCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkDescriptorUpdateTemplateCreateFlags	flags;
	uint32_t								descriptorUpdateEntryCount;
	const VkDescriptorUpdateTemplateEntry*	pDescriptorUpdateEntries;
	VkDescriptorUpdateTemplateType			templateType;
	VkDescriptorSetLayout					descriptorSetLayout;
	VkPipelineBindPoint						pipelineBindPoint;
	VkPipelineLayout						pipelineLayout;
	uint32_t								set;
};

struct VkExternalMemoryProperties
{
	VkExternalMemoryFeatureFlags	externalMemoryFeatures;
	VkExternalMemoryHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlags	compatibleHandleTypes;
};

struct VkPhysicalDeviceExternalImageFormatInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

struct VkExternalImageFormatProperties
{
	VkStructureType				sType;
	void*						pNext;
	VkExternalMemoryProperties	externalMemoryProperties;
};

struct VkPhysicalDeviceExternalBufferInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkBufferCreateFlags					flags;
	VkBufferUsageFlags					usage;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

struct VkExternalBufferProperties
{
	VkStructureType				sType;
	void*						pNext;
	VkExternalMemoryProperties	externalMemoryProperties;
};

struct VkPhysicalDeviceIDProperties
{
	VkStructureType	sType;
	void*			pNext;
	uint8_t			deviceUUID[VK_UUID_SIZE];
	uint8_t			driverUUID[VK_UUID_SIZE];
	uint8_t			deviceLUID[VK_LUID_SIZE];
	uint32_t		deviceNodeMask;
	VkBool32		deviceLUIDValid;
};

struct VkExternalMemoryImageCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkExternalMemoryHandleTypeFlags	handleTypes;
};

struct VkExternalMemoryBufferCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkExternalMemoryHandleTypeFlags	handleTypes;
};

struct VkExportMemoryAllocateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkExternalMemoryHandleTypeFlags	handleTypes;
};

struct VkPhysicalDeviceExternalFenceInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalFenceHandleTypeFlagBits	handleType;
};

struct VkExternalFenceProperties
{
	VkStructureType					sType;
	void*							pNext;
	VkExternalFenceHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalFenceHandleTypeFlags	compatibleHandleTypes;
	VkExternalFenceFeatureFlags		externalFenceFeatures;
};

struct VkExportFenceCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	VkExternalFenceHandleTypeFlags	handleTypes;
};

struct VkExportSemaphoreCreateInfo
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalSemaphoreHandleTypeFlags	handleTypes;
};

struct VkPhysicalDeviceExternalSemaphoreInfo
{
	VkStructureType							sType;
	const void*								pNext;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
};

struct VkExternalSemaphoreProperties
{
	VkStructureType						sType;
	void*								pNext;
	VkExternalSemaphoreHandleTypeFlags	exportFromImportedHandleTypes;
	VkExternalSemaphoreHandleTypeFlags	compatibleHandleTypes;
	VkExternalSemaphoreFeatureFlags		externalSemaphoreFeatures;
};

struct VkPhysicalDeviceMaintenance3Properties
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxPerSetDescriptors;
	VkDeviceSize	maxMemoryAllocationSize;
};

struct VkDescriptorSetLayoutSupport
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		supported;
};

struct VkPhysicalDeviceShaderDrawParametersFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderDrawParameters;
};

struct VkPhysicalDeviceVulkan11Features
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		storageBuffer16BitAccess;
	VkBool32		uniformAndStorageBuffer16BitAccess;
	VkBool32		storagePushConstant16;
	VkBool32		storageInputOutput16;
	VkBool32		multiview;
	VkBool32		multiviewGeometryShader;
	VkBool32		multiviewTessellationShader;
	VkBool32		variablePointersStorageBuffer;
	VkBool32		variablePointers;
	VkBool32		protectedMemory;
	VkBool32		samplerYcbcrConversion;
	VkBool32		shaderDrawParameters;
};

struct VkPhysicalDeviceVulkan11Properties
{
	VkStructureType			sType;
	void*					pNext;
	uint8_t					deviceUUID[VK_UUID_SIZE];
	uint8_t					driverUUID[VK_UUID_SIZE];
	uint8_t					deviceLUID[VK_LUID_SIZE];
	uint32_t				deviceNodeMask;
	VkBool32				deviceLUIDValid;
	uint32_t				subgroupSize;
	VkShaderStageFlags		subgroupSupportedStages;
	VkSubgroupFeatureFlags	subgroupSupportedOperations;
	VkBool32				subgroupQuadOperationsInAllStages;
	VkPointClippingBehavior	pointClippingBehavior;
	uint32_t				maxMultiviewViewCount;
	uint32_t				maxMultiviewInstanceIndex;
	VkBool32				protectedNoFault;
	uint32_t				maxPerSetDescriptors;
	VkDeviceSize			maxMemoryAllocationSize;
};

struct VkPhysicalDeviceVulkan12Features
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		samplerMirrorClampToEdge;
	VkBool32		drawIndirectCount;
	VkBool32		storageBuffer8BitAccess;
	VkBool32		uniformAndStorageBuffer8BitAccess;
	VkBool32		storagePushConstant8;
	VkBool32		shaderBufferInt64Atomics;
	VkBool32		shaderSharedInt64Atomics;
	VkBool32		shaderFloat16;
	VkBool32		shaderInt8;
	VkBool32		descriptorIndexing;
	VkBool32		shaderInputAttachmentArrayDynamicIndexing;
	VkBool32		shaderUniformTexelBufferArrayDynamicIndexing;
	VkBool32		shaderStorageTexelBufferArrayDynamicIndexing;
	VkBool32		shaderUniformBufferArrayNonUniformIndexing;
	VkBool32		shaderSampledImageArrayNonUniformIndexing;
	VkBool32		shaderStorageBufferArrayNonUniformIndexing;
	VkBool32		shaderStorageImageArrayNonUniformIndexing;
	VkBool32		shaderInputAttachmentArrayNonUniformIndexing;
	VkBool32		shaderUniformTexelBufferArrayNonUniformIndexing;
	VkBool32		shaderStorageTexelBufferArrayNonUniformIndexing;
	VkBool32		descriptorBindingUniformBufferUpdateAfterBind;
	VkBool32		descriptorBindingSampledImageUpdateAfterBind;
	VkBool32		descriptorBindingStorageImageUpdateAfterBind;
	VkBool32		descriptorBindingStorageBufferUpdateAfterBind;
	VkBool32		descriptorBindingUniformTexelBufferUpdateAfterBind;
	VkBool32		descriptorBindingStorageTexelBufferUpdateAfterBind;
	VkBool32		descriptorBindingUpdateUnusedWhilePending;
	VkBool32		descriptorBindingPartiallyBound;
	VkBool32		descriptorBindingVariableDescriptorCount;
	VkBool32		runtimeDescriptorArray;
	VkBool32		samplerFilterMinmax;
	VkBool32		scalarBlockLayout;
	VkBool32		imagelessFramebuffer;
	VkBool32		uniformBufferStandardLayout;
	VkBool32		shaderSubgroupExtendedTypes;
	VkBool32		separateDepthStencilLayouts;
	VkBool32		hostQueryReset;
	VkBool32		timelineSemaphore;
	VkBool32		bufferDeviceAddress;
	VkBool32		bufferDeviceAddressCaptureReplay;
	VkBool32		bufferDeviceAddressMultiDevice;
	VkBool32		vulkanMemoryModel;
	VkBool32		vulkanMemoryModelDeviceScope;
	VkBool32		vulkanMemoryModelAvailabilityVisibilityChains;
	VkBool32		shaderOutputViewportIndex;
	VkBool32		shaderOutputLayer;
	VkBool32		subgroupBroadcastDynamicId;
};

struct VkConformanceVersion
{
	uint8_t	major;
	uint8_t	minor;
	uint8_t	subminor;
	uint8_t	patch;
};

struct VkPhysicalDeviceVulkan12Properties
{
	VkStructureType						sType;
	void*								pNext;
	VkDriverId							driverID;
	char								driverName[VK_MAX_DRIVER_NAME_SIZE];
	char								driverInfo[VK_MAX_DRIVER_INFO_SIZE];
	VkConformanceVersion				conformanceVersion;
	VkShaderFloatControlsIndependence	denormBehaviorIndependence;
	VkShaderFloatControlsIndependence	roundingModeIndependence;
	VkBool32							shaderSignedZeroInfNanPreserveFloat16;
	VkBool32							shaderSignedZeroInfNanPreserveFloat32;
	VkBool32							shaderSignedZeroInfNanPreserveFloat64;
	VkBool32							shaderDenormPreserveFloat16;
	VkBool32							shaderDenormPreserveFloat32;
	VkBool32							shaderDenormPreserveFloat64;
	VkBool32							shaderDenormFlushToZeroFloat16;
	VkBool32							shaderDenormFlushToZeroFloat32;
	VkBool32							shaderDenormFlushToZeroFloat64;
	VkBool32							shaderRoundingModeRTEFloat16;
	VkBool32							shaderRoundingModeRTEFloat32;
	VkBool32							shaderRoundingModeRTEFloat64;
	VkBool32							shaderRoundingModeRTZFloat16;
	VkBool32							shaderRoundingModeRTZFloat32;
	VkBool32							shaderRoundingModeRTZFloat64;
	uint32_t							maxUpdateAfterBindDescriptorsInAllPools;
	VkBool32							shaderUniformBufferArrayNonUniformIndexingNative;
	VkBool32							shaderSampledImageArrayNonUniformIndexingNative;
	VkBool32							shaderStorageBufferArrayNonUniformIndexingNative;
	VkBool32							shaderStorageImageArrayNonUniformIndexingNative;
	VkBool32							shaderInputAttachmentArrayNonUniformIndexingNative;
	VkBool32							robustBufferAccessUpdateAfterBind;
	VkBool32							quadDivergentImplicitLod;
	uint32_t							maxPerStageDescriptorUpdateAfterBindSamplers;
	uint32_t							maxPerStageDescriptorUpdateAfterBindUniformBuffers;
	uint32_t							maxPerStageDescriptorUpdateAfterBindStorageBuffers;
	uint32_t							maxPerStageDescriptorUpdateAfterBindSampledImages;
	uint32_t							maxPerStageDescriptorUpdateAfterBindStorageImages;
	uint32_t							maxPerStageDescriptorUpdateAfterBindInputAttachments;
	uint32_t							maxPerStageUpdateAfterBindResources;
	uint32_t							maxDescriptorSetUpdateAfterBindSamplers;
	uint32_t							maxDescriptorSetUpdateAfterBindUniformBuffers;
	uint32_t							maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
	uint32_t							maxDescriptorSetUpdateAfterBindStorageBuffers;
	uint32_t							maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
	uint32_t							maxDescriptorSetUpdateAfterBindSampledImages;
	uint32_t							maxDescriptorSetUpdateAfterBindStorageImages;
	uint32_t							maxDescriptorSetUpdateAfterBindInputAttachments;
	VkResolveModeFlags					supportedDepthResolveModes;
	VkResolveModeFlags					supportedStencilResolveModes;
	VkBool32							independentResolveNone;
	VkBool32							independentResolve;
	VkBool32							filterMinmaxSingleComponentFormats;
	VkBool32							filterMinmaxImageComponentMapping;
	uint64_t							maxTimelineSemaphoreValueDifference;
	VkSampleCountFlags					framebufferIntegerColorSampleCounts;
};

struct VkImageFormatListCreateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		viewFormatCount;
	const VkFormat*	pViewFormats;
};

struct VkAttachmentDescription2
{
	VkStructureType					sType;
	const void*						pNext;
	VkAttachmentDescriptionFlags	flags;
	VkFormat						format;
	VkSampleCountFlagBits			samples;
	VkAttachmentLoadOp				loadOp;
	VkAttachmentStoreOp				storeOp;
	VkAttachmentLoadOp				stencilLoadOp;
	VkAttachmentStoreOp				stencilStoreOp;
	VkImageLayout					initialLayout;
	VkImageLayout					finalLayout;
};

struct VkAttachmentReference2
{
	VkStructureType		sType;
	const void*			pNext;
	uint32_t			attachment;
	VkImageLayout		layout;
	VkImageAspectFlags	aspectMask;
};

struct VkSubpassDescription2
{
	VkStructureType					sType;
	const void*						pNext;
	VkSubpassDescriptionFlags		flags;
	VkPipelineBindPoint				pipelineBindPoint;
	uint32_t						viewMask;
	uint32_t						inputAttachmentCount;
	const VkAttachmentReference2*	pInputAttachments;
	uint32_t						colorAttachmentCount;
	const VkAttachmentReference2*	pColorAttachments;
	const VkAttachmentReference2*	pResolveAttachments;
	const VkAttachmentReference2*	pDepthStencilAttachment;
	uint32_t						preserveAttachmentCount;
	const uint32_t*					pPreserveAttachments;
};

struct VkSubpassDependency2
{
	VkStructureType			sType;
	const void*				pNext;
	uint32_t				srcSubpass;
	uint32_t				dstSubpass;
	VkPipelineStageFlags	srcStageMask;
	VkPipelineStageFlags	dstStageMask;
	VkAccessFlags			srcAccessMask;
	VkAccessFlags			dstAccessMask;
	VkDependencyFlags		dependencyFlags;
	int32_t					viewOffset;
};

struct VkRenderPassCreateInfo2
{
	VkStructureType					sType;
	const void*						pNext;
	VkRenderPassCreateFlags			flags;
	uint32_t						attachmentCount;
	const VkAttachmentDescription2*	pAttachments;
	uint32_t						subpassCount;
	const VkSubpassDescription2*	pSubpasses;
	uint32_t						dependencyCount;
	const VkSubpassDependency2*		pDependencies;
	uint32_t						correlatedViewMaskCount;
	const uint32_t*					pCorrelatedViewMasks;
};

struct VkSubpassBeginInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkSubpassContents	contents;
};

struct VkSubpassEndInfo
{
	VkStructureType	sType;
	const void*		pNext;
};

struct VkPhysicalDevice8BitStorageFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		storageBuffer8BitAccess;
	VkBool32		uniformAndStorageBuffer8BitAccess;
	VkBool32		storagePushConstant8;
};

struct VkPhysicalDeviceDriverProperties
{
	VkStructureType			sType;
	void*					pNext;
	VkDriverId				driverID;
	char					driverName[VK_MAX_DRIVER_NAME_SIZE];
	char					driverInfo[VK_MAX_DRIVER_INFO_SIZE];
	VkConformanceVersion	conformanceVersion;
};

struct VkPhysicalDeviceShaderAtomicInt64Features
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderBufferInt64Atomics;
	VkBool32		shaderSharedInt64Atomics;
};

struct VkPhysicalDeviceShaderFloat16Int8Features
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderFloat16;
	VkBool32		shaderInt8;
};

struct VkPhysicalDeviceFloatControlsProperties
{
	VkStructureType						sType;
	void*								pNext;
	VkShaderFloatControlsIndependence	denormBehaviorIndependence;
	VkShaderFloatControlsIndependence	roundingModeIndependence;
	VkBool32							shaderSignedZeroInfNanPreserveFloat16;
	VkBool32							shaderSignedZeroInfNanPreserveFloat32;
	VkBool32							shaderSignedZeroInfNanPreserveFloat64;
	VkBool32							shaderDenormPreserveFloat16;
	VkBool32							shaderDenormPreserveFloat32;
	VkBool32							shaderDenormPreserveFloat64;
	VkBool32							shaderDenormFlushToZeroFloat16;
	VkBool32							shaderDenormFlushToZeroFloat32;
	VkBool32							shaderDenormFlushToZeroFloat64;
	VkBool32							shaderRoundingModeRTEFloat16;
	VkBool32							shaderRoundingModeRTEFloat32;
	VkBool32							shaderRoundingModeRTEFloat64;
	VkBool32							shaderRoundingModeRTZFloat16;
	VkBool32							shaderRoundingModeRTZFloat32;
	VkBool32							shaderRoundingModeRTZFloat64;
};

struct VkDescriptorSetLayoutBindingFlagsCreateInfo
{
	VkStructureType					sType;
	const void*						pNext;
	uint32_t						bindingCount;
	const VkDescriptorBindingFlags*	pBindingFlags;
};

struct VkPhysicalDeviceDescriptorIndexingFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderInputAttachmentArrayDynamicIndexing;
	VkBool32		shaderUniformTexelBufferArrayDynamicIndexing;
	VkBool32		shaderStorageTexelBufferArrayDynamicIndexing;
	VkBool32		shaderUniformBufferArrayNonUniformIndexing;
	VkBool32		shaderSampledImageArrayNonUniformIndexing;
	VkBool32		shaderStorageBufferArrayNonUniformIndexing;
	VkBool32		shaderStorageImageArrayNonUniformIndexing;
	VkBool32		shaderInputAttachmentArrayNonUniformIndexing;
	VkBool32		shaderUniformTexelBufferArrayNonUniformIndexing;
	VkBool32		shaderStorageTexelBufferArrayNonUniformIndexing;
	VkBool32		descriptorBindingUniformBufferUpdateAfterBind;
	VkBool32		descriptorBindingSampledImageUpdateAfterBind;
	VkBool32		descriptorBindingStorageImageUpdateAfterBind;
	VkBool32		descriptorBindingStorageBufferUpdateAfterBind;
	VkBool32		descriptorBindingUniformTexelBufferUpdateAfterBind;
	VkBool32		descriptorBindingStorageTexelBufferUpdateAfterBind;
	VkBool32		descriptorBindingUpdateUnusedWhilePending;
	VkBool32		descriptorBindingPartiallyBound;
	VkBool32		descriptorBindingVariableDescriptorCount;
	VkBool32		runtimeDescriptorArray;
};

struct VkPhysicalDeviceDescriptorIndexingProperties
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxUpdateAfterBindDescriptorsInAllPools;
	VkBool32		shaderUniformBufferArrayNonUniformIndexingNative;
	VkBool32		shaderSampledImageArrayNonUniformIndexingNative;
	VkBool32		shaderStorageBufferArrayNonUniformIndexingNative;
	VkBool32		shaderStorageImageArrayNonUniformIndexingNative;
	VkBool32		shaderInputAttachmentArrayNonUniformIndexingNative;
	VkBool32		robustBufferAccessUpdateAfterBind;
	VkBool32		quadDivergentImplicitLod;
	uint32_t		maxPerStageDescriptorUpdateAfterBindSamplers;
	uint32_t		maxPerStageDescriptorUpdateAfterBindUniformBuffers;
	uint32_t		maxPerStageDescriptorUpdateAfterBindStorageBuffers;
	uint32_t		maxPerStageDescriptorUpdateAfterBindSampledImages;
	uint32_t		maxPerStageDescriptorUpdateAfterBindStorageImages;
	uint32_t		maxPerStageDescriptorUpdateAfterBindInputAttachments;
	uint32_t		maxPerStageUpdateAfterBindResources;
	uint32_t		maxDescriptorSetUpdateAfterBindSamplers;
	uint32_t		maxDescriptorSetUpdateAfterBindUniformBuffers;
	uint32_t		maxDescriptorSetUpdateAfterBindUniformBuffersDynamic;
	uint32_t		maxDescriptorSetUpdateAfterBindStorageBuffers;
	uint32_t		maxDescriptorSetUpdateAfterBindStorageBuffersDynamic;
	uint32_t		maxDescriptorSetUpdateAfterBindSampledImages;
	uint32_t		maxDescriptorSetUpdateAfterBindStorageImages;
	uint32_t		maxDescriptorSetUpdateAfterBindInputAttachments;
};

struct VkDescriptorSetVariableDescriptorCountAllocateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		descriptorSetCount;
	const uint32_t*	pDescriptorCounts;
};

struct VkDescriptorSetVariableDescriptorCountLayoutSupport
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxVariableDescriptorCount;
};

struct VkSubpassDescriptionDepthStencilResolve
{
	VkStructureType					sType;
	const void*						pNext;
	VkResolveModeFlagBits			depthResolveMode;
	VkResolveModeFlagBits			stencilResolveMode;
	const VkAttachmentReference2*	pDepthStencilResolveAttachment;
};

struct VkPhysicalDeviceDepthStencilResolveProperties
{
	VkStructureType		sType;
	void*				pNext;
	VkResolveModeFlags	supportedDepthResolveModes;
	VkResolveModeFlags	supportedStencilResolveModes;
	VkBool32			independentResolveNone;
	VkBool32			independentResolve;
};

struct VkPhysicalDeviceScalarBlockLayoutFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		scalarBlockLayout;
};

struct VkImageStencilUsageCreateInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkImageUsageFlags	stencilUsage;
};

struct VkSamplerReductionModeCreateInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkSamplerReductionMode	reductionMode;
};

struct VkPhysicalDeviceSamplerFilterMinmaxProperties
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		filterMinmaxSingleComponentFormats;
	VkBool32		filterMinmaxImageComponentMapping;
};

struct VkPhysicalDeviceVulkanMemoryModelFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		vulkanMemoryModel;
	VkBool32		vulkanMemoryModelDeviceScope;
	VkBool32		vulkanMemoryModelAvailabilityVisibilityChains;
};

struct VkPhysicalDeviceImagelessFramebufferFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		imagelessFramebuffer;
};

struct VkFramebufferAttachmentImageInfo
{
	VkStructureType		sType;
	const void*			pNext;
	VkImageCreateFlags	flags;
	VkImageUsageFlags	usage;
	uint32_t			width;
	uint32_t			height;
	uint32_t			layerCount;
	uint32_t			viewFormatCount;
	const VkFormat*		pViewFormats;
};

struct VkFramebufferAttachmentsCreateInfo
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								attachmentImageInfoCount;
	const VkFramebufferAttachmentImageInfo*	pAttachmentImageInfos;
};

struct VkRenderPassAttachmentBeginInfo
{
	VkStructureType		sType;
	const void*			pNext;
	uint32_t			attachmentCount;
	const VkImageView*	pAttachments;
};

struct VkPhysicalDeviceUniformBufferStandardLayoutFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		uniformBufferStandardLayout;
};

struct VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderSubgroupExtendedTypes;
};

struct VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		separateDepthStencilLayouts;
};

struct VkAttachmentReferenceStencilLayout
{
	VkStructureType	sType;
	void*			pNext;
	VkImageLayout	stencilLayout;
};

struct VkAttachmentDescriptionStencilLayout
{
	VkStructureType	sType;
	void*			pNext;
	VkImageLayout	stencilInitialLayout;
	VkImageLayout	stencilFinalLayout;
};

struct VkPhysicalDeviceHostQueryResetFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		hostQueryReset;
};

struct VkPhysicalDeviceTimelineSemaphoreFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		timelineSemaphore;
};

struct VkPhysicalDeviceTimelineSemaphoreProperties
{
	VkStructureType	sType;
	void*			pNext;
	uint64_t		maxTimelineSemaphoreValueDifference;
};

struct VkSemaphoreTypeCreateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkSemaphoreType	semaphoreType;
	uint64_t		initialValue;
};

struct VkTimelineSemaphoreSubmitInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		waitSemaphoreValueCount;
	const uint64_t*	pWaitSemaphoreValues;
	uint32_t		signalSemaphoreValueCount;
	const uint64_t*	pSignalSemaphoreValues;
};

struct VkSemaphoreWaitInfo
{
	VkStructureType			sType;
	const void*				pNext;
	VkSemaphoreWaitFlags	flags;
	uint32_t				semaphoreCount;
	const VkSemaphore*		pSemaphores;
	const uint64_t*			pValues;
};

struct VkSemaphoreSignalInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkSemaphore		semaphore;
	uint64_t		value;
};

struct VkPhysicalDeviceBufferDeviceAddressFeatures
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		bufferDeviceAddress;
	VkBool32		bufferDeviceAddressCaptureReplay;
	VkBool32		bufferDeviceAddressMultiDevice;
};

struct VkBufferDeviceAddressInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkBuffer		buffer;
};

struct VkBufferOpaqueCaptureAddressCreateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint64_t		opaqueCaptureAddress;
};

struct VkMemoryOpaqueCaptureAddressAllocateInfo
{
	VkStructureType	sType;
	const void*		pNext;
	uint64_t		opaqueCaptureAddress;
};

struct VkDeviceMemoryOpaqueCaptureAddressInfo
{
	VkStructureType	sType;
	const void*		pNext;
	VkDeviceMemory	memory;
};

struct VkSurfaceCapabilitiesKHR
{
	uint32_t						minImageCount;
	uint32_t						maxImageCount;
	VkExtent2D						currentExtent;
	VkExtent2D						minImageExtent;
	VkExtent2D						maxImageExtent;
	uint32_t						maxImageArrayLayers;
	VkSurfaceTransformFlagsKHR		supportedTransforms;
	VkSurfaceTransformFlagBitsKHR	currentTransform;
	VkCompositeAlphaFlagsKHR		supportedCompositeAlpha;
	VkImageUsageFlags				supportedUsageFlags;
};

struct VkSurfaceFormatKHR
{
	VkFormat		format;
	VkColorSpaceKHR	colorSpace;
};

struct VkSwapchainCreateInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkSwapchainCreateFlagsKHR		flags;
	VkSurfaceKHR					surface;
	uint32_t						minImageCount;
	VkFormat						imageFormat;
	VkColorSpaceKHR					imageColorSpace;
	VkExtent2D						imageExtent;
	uint32_t						imageArrayLayers;
	VkImageUsageFlags				imageUsage;
	VkSharingMode					imageSharingMode;
	uint32_t						queueFamilyIndexCount;
	const uint32_t*					pQueueFamilyIndices;
	VkSurfaceTransformFlagBitsKHR	preTransform;
	VkCompositeAlphaFlagBitsKHR		compositeAlpha;
	VkPresentModeKHR				presentMode;
	VkBool32						clipped;
	VkSwapchainKHR					oldSwapchain;
};

struct VkPresentInfoKHR
{
	VkStructureType			sType;
	const void*				pNext;
	uint32_t				waitSemaphoreCount;
	const VkSemaphore*		pWaitSemaphores;
	uint32_t				swapchainCount;
	const VkSwapchainKHR*	pSwapchains;
	const uint32_t*			pImageIndices;
	VkResult*				pResults;
};

struct VkImageSwapchainCreateInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkSwapchainKHR	swapchain;
};

struct VkBindImageMemorySwapchainInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkSwapchainKHR	swapchain;
	uint32_t		imageIndex;
};

struct VkAcquireNextImageInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkSwapchainKHR	swapchain;
	uint64_t		timeout;
	VkSemaphore		semaphore;
	VkFence			fence;
	uint32_t		deviceMask;
};

struct VkDeviceGroupPresentCapabilitiesKHR
{
	VkStructureType						sType;
	void*								pNext;
	uint32_t							presentMask[VK_MAX_DEVICE_GROUP_SIZE];
	VkDeviceGroupPresentModeFlagsKHR	modes;
};

struct VkDeviceGroupPresentInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	uint32_t							swapchainCount;
	const uint32_t*						pDeviceMasks;
	VkDeviceGroupPresentModeFlagBitsKHR	mode;
};

struct VkDeviceGroupSwapchainCreateInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceGroupPresentModeFlagsKHR	modes;
};

struct VkDisplayModeParametersKHR
{
	VkExtent2D	visibleRegion;
	uint32_t	refreshRate;
};

struct VkDisplayModeCreateInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkDisplayModeCreateFlagsKHR	flags;
	VkDisplayModeParametersKHR	parameters;
};

struct VkDisplayModePropertiesKHR
{
	VkDisplayModeKHR			displayMode;
	VkDisplayModeParametersKHR	parameters;
};

struct VkDisplayPlaneCapabilitiesKHR
{
	VkDisplayPlaneAlphaFlagsKHR	supportedAlpha;
	VkOffset2D					minSrcPosition;
	VkOffset2D					maxSrcPosition;
	VkExtent2D					minSrcExtent;
	VkExtent2D					maxSrcExtent;
	VkOffset2D					minDstPosition;
	VkOffset2D					maxDstPosition;
	VkExtent2D					minDstExtent;
	VkExtent2D					maxDstExtent;
};

struct VkDisplayPlanePropertiesKHR
{
	VkDisplayKHR	currentDisplay;
	uint32_t		currentStackIndex;
};

struct VkDisplayPropertiesKHR
{
	VkDisplayKHR				display;
	const char*					displayName;
	VkExtent2D					physicalDimensions;
	VkExtent2D					physicalResolution;
	VkSurfaceTransformFlagsKHR	supportedTransforms;
	VkBool32					planeReorderPossible;
	VkBool32					persistentContent;
};

struct VkDisplaySurfaceCreateInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkDisplaySurfaceCreateFlagsKHR	flags;
	VkDisplayModeKHR				displayMode;
	uint32_t						planeIndex;
	uint32_t						planeStackIndex;
	VkSurfaceTransformFlagBitsKHR	transform;
	float							globalAlpha;
	VkDisplayPlaneAlphaFlagBitsKHR	alphaMode;
	VkExtent2D						imageExtent;
};

struct VkDisplayPresentInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkRect2D		srcRect;
	VkRect2D		dstRect;
	VkBool32		persistent;
};

struct VkImportMemoryFdInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
	int									fd;
};

struct VkMemoryFdPropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		memoryTypeBits;
};

struct VkMemoryGetFdInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceMemory						memory;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

struct VkImportSemaphoreFdInfoKHR
{
	VkStructureType							sType;
	const void*								pNext;
	VkSemaphore								semaphore;
	VkSemaphoreImportFlags					flags;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
	int										fd;
};

struct VkSemaphoreGetFdInfoKHR
{
	VkStructureType							sType;
	const void*								pNext;
	VkSemaphore								semaphore;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
};

struct VkPhysicalDevicePushDescriptorPropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxPushDescriptors;
};

struct VkRectLayerKHR
{
	VkOffset2D	offset;
	VkExtent2D	extent;
	uint32_t	layer;
};

struct VkPresentRegionKHR
{
	uint32_t				rectangleCount;
	const VkRectLayerKHR*	pRectangles;
};

struct VkPresentRegionsKHR
{
	VkStructureType				sType;
	const void*					pNext;
	uint32_t					swapchainCount;
	const VkPresentRegionKHR*	pRegions;
};

struct VkSharedPresentSurfaceCapabilitiesKHR
{
	VkStructureType		sType;
	void*				pNext;
	VkImageUsageFlags	sharedPresentSupportedUsageFlags;
};

struct VkImportFenceFdInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkFence								fence;
	VkFenceImportFlags					flags;
	VkExternalFenceHandleTypeFlagBits	handleType;
	int									fd;
};

struct VkFenceGetFdInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkFence								fence;
	VkExternalFenceHandleTypeFlagBits	handleType;
};

struct VkPhysicalDevicePerformanceQueryFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		performanceCounterQueryPools;
	VkBool32		performanceCounterMultipleQueryPools;
};

struct VkPhysicalDevicePerformanceQueryPropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		allowCommandBufferQueryCopies;
};

struct VkPerformanceCounterKHR
{
	VkStructureType					sType;
	void*							pNext;
	VkPerformanceCounterUnitKHR		unit;
	VkPerformanceCounterScopeKHR	scope;
	VkPerformanceCounterStorageKHR	storage;
	uint8_t							uuid[VK_UUID_SIZE];
};

struct VkPerformanceCounterDescriptionKHR
{
	VkStructureType							sType;
	void*									pNext;
	VkPerformanceCounterDescriptionFlagsKHR	flags;
	char									name[VK_MAX_DESCRIPTION_SIZE];
	char									category[VK_MAX_DESCRIPTION_SIZE];
	char									description[VK_MAX_DESCRIPTION_SIZE];
};

struct VkQueryPoolPerformanceCreateInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		queueFamilyIndex;
	uint32_t		counterIndexCount;
	const uint32_t*	pCounterIndices;
};

union VkPerformanceCounterResultKHR
{
	int32_t		int32;
	int64_t		int64;
	uint32_t	uint32;
	uint64_t	uint64;
	float		float32;
	double		float64;
};

struct VkAcquireProfilingLockInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkAcquireProfilingLockFlagsKHR	flags;
	uint64_t						timeout;
};

struct VkPerformanceQuerySubmitInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		counterPassIndex;
};

struct VkPhysicalDeviceSurfaceInfo2KHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkSurfaceKHR	surface;
};

struct VkSurfaceCapabilities2KHR
{
	VkStructureType				sType;
	void*						pNext;
	VkSurfaceCapabilitiesKHR	surfaceCapabilities;
};

struct VkSurfaceFormat2KHR
{
	VkStructureType		sType;
	void*				pNext;
	VkSurfaceFormatKHR	surfaceFormat;
};

struct VkDisplayProperties2KHR
{
	VkStructureType			sType;
	void*					pNext;
	VkDisplayPropertiesKHR	displayProperties;
};

struct VkDisplayPlaneProperties2KHR
{
	VkStructureType				sType;
	void*						pNext;
	VkDisplayPlanePropertiesKHR	displayPlaneProperties;
};

struct VkDisplayModeProperties2KHR
{
	VkStructureType				sType;
	void*						pNext;
	VkDisplayModePropertiesKHR	displayModeProperties;
};

struct VkDisplayPlaneInfo2KHR
{
	VkStructureType		sType;
	const void*			pNext;
	VkDisplayModeKHR	mode;
	uint32_t			planeIndex;
};

struct VkDisplayPlaneCapabilities2KHR
{
	VkStructureType					sType;
	void*							pNext;
	VkDisplayPlaneCapabilitiesKHR	capabilities;
};

struct VkPhysicalDeviceShaderClockFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderSubgroupClock;
	VkBool32		shaderDeviceClock;
};

struct VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderTerminateInvocation;
};

struct VkFragmentShadingRateAttachmentInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	const VkAttachmentReference2*	pFragmentShadingRateAttachment;
	VkExtent2D						shadingRateAttachmentTexelSize;
};

struct VkPipelineFragmentShadingRateStateCreateInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkExtent2D							fragmentSize;
	VkFragmentShadingRateCombinerOpKHR	combinerOps[2];
};

struct VkPhysicalDeviceFragmentShadingRateFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		pipelineFragmentShadingRate;
	VkBool32		primitiveFragmentShadingRate;
	VkBool32		attachmentFragmentShadingRate;
};

struct VkPhysicalDeviceFragmentShadingRatePropertiesKHR
{
	VkStructureType			sType;
	void*					pNext;
	VkExtent2D				minFragmentShadingRateAttachmentTexelSize;
	VkExtent2D				maxFragmentShadingRateAttachmentTexelSize;
	uint32_t				maxFragmentShadingRateAttachmentTexelSizeAspectRatio;
	VkBool32				primitiveFragmentShadingRateWithMultipleViewports;
	VkBool32				layeredShadingRateAttachments;
	VkBool32				fragmentShadingRateNonTrivialCombinerOps;
	VkExtent2D				maxFragmentSize;
	uint32_t				maxFragmentSizeAspectRatio;
	uint32_t				maxFragmentShadingRateCoverageSamples;
	VkSampleCountFlagBits	maxFragmentShadingRateRasterizationSamples;
	VkBool32				fragmentShadingRateWithShaderDepthStencilWrites;
	VkBool32				fragmentShadingRateWithSampleMask;
	VkBool32				fragmentShadingRateWithShaderSampleMask;
	VkBool32				fragmentShadingRateWithConservativeRasterization;
	VkBool32				fragmentShadingRateWithFragmentShaderInterlock;
	VkBool32				fragmentShadingRateWithCustomSampleLocations;
	VkBool32				fragmentShadingRateStrictMultiplyCombiner;
};

struct VkPhysicalDeviceFragmentShadingRateKHR
{
	VkStructureType		sType;
	void*				pNext;
	VkSampleCountFlags	sampleCounts;
	VkExtent2D			fragmentSize;
};

struct VkSurfaceProtectedCapabilitiesKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		supportsProtected;
};

struct VkPhysicalDevicePresentWaitFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		presentWait;
};

struct VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		pipelineExecutableInfo;
};

struct VkPipelineInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkPipeline		pipeline;
};

struct VkPipelineExecutablePropertiesKHR
{
	VkStructureType		sType;
	void*				pNext;
	VkShaderStageFlags	stages;
	char				name[VK_MAX_DESCRIPTION_SIZE];
	char				description[VK_MAX_DESCRIPTION_SIZE];
	uint32_t			subgroupSize;
};

struct VkPipelineExecutableInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkPipeline		pipeline;
	uint32_t		executableIndex;
};

union VkPipelineExecutableStatisticValueKHR
{
	VkBool32	b32;
	int64_t		i64;
	uint64_t	u64;
	double		f64;
};

struct VkPipelineExecutableStatisticKHR
{
	VkStructureType							sType;
	void*									pNext;
	char									name[VK_MAX_DESCRIPTION_SIZE];
	char									description[VK_MAX_DESCRIPTION_SIZE];
	VkPipelineExecutableStatisticFormatKHR	format;
	VkPipelineExecutableStatisticValueKHR	value;
};

struct VkPipelineExecutableInternalRepresentationKHR
{
	VkStructureType	sType;
	void*			pNext;
	char			name[VK_MAX_DESCRIPTION_SIZE];
	char			description[VK_MAX_DESCRIPTION_SIZE];
	VkBool32		isText;
	size_t			dataSize;
	void*			pData;
};

struct VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderIntegerDotProduct;
};

struct VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		integerDotProduct8BitUnsignedAccelerated;
	VkBool32		integerDotProduct8BitSignedAccelerated;
	VkBool32		integerDotProduct8BitMixedSignednessAccelerated;
	VkBool32		integerDotProduct4x8BitPackedUnsignedAccelerated;
	VkBool32		integerDotProduct4x8BitPackedSignedAccelerated;
	VkBool32		integerDotProduct4x8BitPackedMixedSignednessAccelerated;
	VkBool32		integerDotProduct16BitUnsignedAccelerated;
	VkBool32		integerDotProduct16BitSignedAccelerated;
	VkBool32		integerDotProduct16BitMixedSignednessAccelerated;
	VkBool32		integerDotProduct32BitUnsignedAccelerated;
	VkBool32		integerDotProduct32BitSignedAccelerated;
	VkBool32		integerDotProduct32BitMixedSignednessAccelerated;
	VkBool32		integerDotProduct64BitUnsignedAccelerated;
	VkBool32		integerDotProduct64BitSignedAccelerated;
	VkBool32		integerDotProduct64BitMixedSignednessAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating8BitUnsignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating8BitSignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating16BitUnsignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating16BitSignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating32BitUnsignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating32BitSignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating64BitUnsignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating64BitSignedAccelerated;
	VkBool32		integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated;
};

struct VkPipelineLibraryCreateInfoKHR
{
	VkStructureType		sType;
	const void*			pNext;
	uint32_t			libraryCount;
	const VkPipeline*	pLibraries;
};

struct VkPresentIdKHR
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		swapchainCount;
	const uint64_t*	pPresentIds;
};

struct VkPhysicalDevicePresentIdFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		presentId;
};

struct VkMemoryBarrier2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkPipelineStageFlags2KHR	srcStageMask;
	VkAccessFlags2KHR			srcAccessMask;
	VkPipelineStageFlags2KHR	dstStageMask;
	VkAccessFlags2KHR			dstAccessMask;
};

struct VkBufferMemoryBarrier2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkPipelineStageFlags2KHR	srcStageMask;
	VkAccessFlags2KHR			srcAccessMask;
	VkPipelineStageFlags2KHR	dstStageMask;
	VkAccessFlags2KHR			dstAccessMask;
	uint32_t					srcQueueFamilyIndex;
	uint32_t					dstQueueFamilyIndex;
	VkBuffer					buffer;
	VkDeviceSize				offset;
	VkDeviceSize				size;
};

struct VkImageMemoryBarrier2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkPipelineStageFlags2KHR	srcStageMask;
	VkAccessFlags2KHR			srcAccessMask;
	VkPipelineStageFlags2KHR	dstStageMask;
	VkAccessFlags2KHR			dstAccessMask;
	VkImageLayout				oldLayout;
	VkImageLayout				newLayout;
	uint32_t					srcQueueFamilyIndex;
	uint32_t					dstQueueFamilyIndex;
	VkImage						image;
	VkImageSubresourceRange		subresourceRange;
};

struct VkDependencyInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkDependencyFlags					dependencyFlags;
	uint32_t							memoryBarrierCount;
	const VkMemoryBarrier2KHR*			pMemoryBarriers;
	uint32_t							bufferMemoryBarrierCount;
	const VkBufferMemoryBarrier2KHR*	pBufferMemoryBarriers;
	uint32_t							imageMemoryBarrierCount;
	const VkImageMemoryBarrier2KHR*		pImageMemoryBarriers;
};

struct VkSemaphoreSubmitInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkSemaphore					semaphore;
	uint64_t					value;
	VkPipelineStageFlags2KHR	stageMask;
	uint32_t					deviceIndex;
};

struct VkCommandBufferSubmitInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkCommandBuffer	commandBuffer;
	uint32_t		deviceMask;
};

struct VkSubmitInfo2KHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkSubmitFlagsKHR					flags;
	uint32_t							waitSemaphoreInfoCount;
	const VkSemaphoreSubmitInfoKHR*		pWaitSemaphoreInfos;
	uint32_t							commandBufferInfoCount;
	const VkCommandBufferSubmitInfoKHR*	pCommandBufferInfos;
	uint32_t							signalSemaphoreInfoCount;
	const VkSemaphoreSubmitInfoKHR*		pSignalSemaphoreInfos;
};

struct VkPhysicalDeviceSynchronization2FeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		synchronization2;
};

struct VkQueueFamilyCheckpointProperties2NV
{
	VkStructureType				sType;
	void*						pNext;
	VkPipelineStageFlags2KHR	checkpointExecutionStageMask;
};

struct VkCheckpointData2NV
{
	VkStructureType				sType;
	void*						pNext;
	VkPipelineStageFlags2KHR	stage;
	void*						pCheckpointMarker;
};

struct VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderSubgroupUniformControlFlow;
};

struct VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderZeroInitializeWorkgroupMemory;
};

struct VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		workgroupMemoryExplicitLayout;
	VkBool32		workgroupMemoryExplicitLayoutScalarBlockLayout;
	VkBool32		workgroupMemoryExplicitLayout8BitAccess;
	VkBool32		workgroupMemoryExplicitLayout16BitAccess;
};

struct VkBufferCopy2KHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkDeviceSize	srcOffset;
	VkDeviceSize	dstOffset;
	VkDeviceSize	size;
};

struct VkCopyBufferInfo2KHR
{
	VkStructureType			sType;
	const void*				pNext;
	VkBuffer				srcBuffer;
	VkBuffer				dstBuffer;
	uint32_t				regionCount;
	const VkBufferCopy2KHR*	pRegions;
};

struct VkImageCopy2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkImageSubresourceLayers	srcSubresource;
	VkOffset3D					srcOffset;
	VkImageSubresourceLayers	dstSubresource;
	VkOffset3D					dstOffset;
	VkExtent3D					extent;
};

struct VkCopyImageInfo2KHR
{
	VkStructureType			sType;
	const void*				pNext;
	VkImage					srcImage;
	VkImageLayout			srcImageLayout;
	VkImage					dstImage;
	VkImageLayout			dstImageLayout;
	uint32_t				regionCount;
	const VkImageCopy2KHR*	pRegions;
};

struct VkBufferImageCopy2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkDeviceSize				bufferOffset;
	uint32_t					bufferRowLength;
	uint32_t					bufferImageHeight;
	VkImageSubresourceLayers	imageSubresource;
	VkOffset3D					imageOffset;
	VkExtent3D					imageExtent;
};

struct VkCopyBufferToImageInfo2KHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkBuffer						srcBuffer;
	VkImage							dstImage;
	VkImageLayout					dstImageLayout;
	uint32_t						regionCount;
	const VkBufferImageCopy2KHR*	pRegions;
};

struct VkCopyImageToBufferInfo2KHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkImage							srcImage;
	VkImageLayout					srcImageLayout;
	VkBuffer						dstBuffer;
	uint32_t						regionCount;
	const VkBufferImageCopy2KHR*	pRegions;
};

struct VkImageBlit2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkImageSubresourceLayers	srcSubresource;
	VkOffset3D					srcOffsets[2];
	VkImageSubresourceLayers	dstSubresource;
	VkOffset3D					dstOffsets[2];
};

struct VkBlitImageInfo2KHR
{
	VkStructureType			sType;
	const void*				pNext;
	VkImage					srcImage;
	VkImageLayout			srcImageLayout;
	VkImage					dstImage;
	VkImageLayout			dstImageLayout;
	uint32_t				regionCount;
	const VkImageBlit2KHR*	pRegions;
	VkFilter				filter;
};

struct VkImageResolve2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkImageSubresourceLayers	srcSubresource;
	VkOffset3D					srcOffset;
	VkImageSubresourceLayers	dstSubresource;
	VkOffset3D					dstOffset;
	VkExtent3D					extent;
};

struct VkResolveImageInfo2KHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkImage						srcImage;
	VkImageLayout				srcImageLayout;
	VkImage						dstImage;
	VkImageLayout				dstImageLayout;
	uint32_t					regionCount;
	const VkImageResolve2KHR*	pRegions;
};

struct VkDebugReportCallbackCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkDebugReportFlagsEXT			flags;
	PFN_vkDebugReportCallbackEXT	pfnCallback;
	void*							pUserData;
};

struct VkPipelineRasterizationStateRasterizationOrderAMD
{
	VkStructureType			sType;
	const void*				pNext;
	VkRasterizationOrderAMD	rasterizationOrder;
};

struct VkDebugMarkerObjectNameInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkDebugReportObjectTypeEXT	objectType;
	uint64_t					object;
	const char*					pObjectName;
};

struct VkDebugMarkerObjectTagInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkDebugReportObjectTypeEXT	objectType;
	uint64_t					object;
	uint64_t					tagName;
	size_t						tagSize;
	const void*					pTag;
};

struct VkDebugMarkerMarkerInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	const char*		pMarkerName;
	float			color[4];
};

struct VkDedicatedAllocationImageCreateInfoNV
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		dedicatedAllocation;
};

struct VkDedicatedAllocationBufferCreateInfoNV
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		dedicatedAllocation;
};

struct VkDedicatedAllocationMemoryAllocateInfoNV
{
	VkStructureType	sType;
	const void*		pNext;
	VkImage			image;
	VkBuffer		buffer;
};

struct VkPhysicalDeviceTransformFeedbackFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		transformFeedback;
	VkBool32		geometryStreams;
};

struct VkPhysicalDeviceTransformFeedbackPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxTransformFeedbackStreams;
	uint32_t		maxTransformFeedbackBuffers;
	VkDeviceSize	maxTransformFeedbackBufferSize;
	uint32_t		maxTransformFeedbackStreamDataSize;
	uint32_t		maxTransformFeedbackBufferDataSize;
	uint32_t		maxTransformFeedbackBufferDataStride;
	VkBool32		transformFeedbackQueries;
	VkBool32		transformFeedbackStreamsLinesTriangles;
	VkBool32		transformFeedbackRasterizationStreamSelect;
	VkBool32		transformFeedbackDraw;
};

struct VkPipelineRasterizationStateStreamCreateInfoEXT
{
	VkStructureType										sType;
	const void*											pNext;
	VkPipelineRasterizationStateStreamCreateFlagsEXT	flags;
	uint32_t											rasterizationStream;
};

struct VkCuModuleCreateInfoNVX
{
	VkStructureType	sType;
	const void*		pNext;
	size_t			dataSize;
	const void*		pData;
};

struct VkCuFunctionCreateInfoNVX
{
	VkStructureType	sType;
	const void*		pNext;
	VkCuModuleNVX	module;
	const char*		pName;
};

struct VkCuLaunchInfoNVX
{
	VkStructureType		sType;
	const void*			pNext;
	VkCuFunctionNVX		function;
	uint32_t			gridDimX;
	uint32_t			gridDimY;
	uint32_t			gridDimZ;
	uint32_t			blockDimX;
	uint32_t			blockDimY;
	uint32_t			blockDimZ;
	uint32_t			sharedMemBytes;
	size_t				paramCount;
	const void* const *	pParams;
	size_t				extraCount;
	const void* const *	pExtras;
};

struct VkImageViewHandleInfoNVX
{
	VkStructureType		sType;
	const void*			pNext;
	VkImageView			imageView;
	VkDescriptorType	descriptorType;
	VkSampler			sampler;
};

struct VkImageViewAddressPropertiesNVX
{
	VkStructureType	sType;
	void*			pNext;
	VkDeviceAddress	deviceAddress;
	VkDeviceSize	size;
};

struct VkTextureLODGatherFormatPropertiesAMD
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		supportsTextureGatherLODBiasAMD;
};

struct VkShaderResourceUsageAMD
{
	uint32_t	numUsedVgprs;
	uint32_t	numUsedSgprs;
	uint32_t	ldsSizePerLocalWorkGroup;
	size_t		ldsUsageSizeInBytes;
	size_t		scratchMemUsageInBytes;
};

struct VkShaderStatisticsInfoAMD
{
	VkShaderStageFlags			shaderStageMask;
	VkShaderResourceUsageAMD	resourceUsage;
	uint32_t					numPhysicalVgprs;
	uint32_t					numPhysicalSgprs;
	uint32_t					numAvailableVgprs;
	uint32_t					numAvailableSgprs;
	uint32_t					computeWorkGroupSize[3];
};

struct VkPhysicalDeviceCornerSampledImageFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		cornerSampledImage;
};

struct VkExternalImageFormatPropertiesNV
{
	VkImageFormatProperties				imageFormatProperties;
	VkExternalMemoryFeatureFlagsNV		externalMemoryFeatures;
	VkExternalMemoryHandleTypeFlagsNV	exportFromImportedHandleTypes;
	VkExternalMemoryHandleTypeFlagsNV	compatibleHandleTypes;
};

struct VkExternalMemoryImageCreateInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagsNV	handleTypes;
};

struct VkExportMemoryAllocateInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagsNV	handleTypes;
};

struct VkValidationFlagsEXT
{
	VkStructureType				sType;
	const void*					pNext;
	uint32_t					disabledValidationCheckCount;
	const VkValidationCheckEXT*	pDisabledValidationChecks;
};

struct VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		textureCompressionASTC_HDR;
};

struct VkImageViewASTCDecodeModeEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkFormat		decodeMode;
};

struct VkPhysicalDeviceASTCDecodeFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		decodeModeSharedExponent;
};

struct VkConditionalRenderingBeginInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkBuffer						buffer;
	VkDeviceSize					offset;
	VkConditionalRenderingFlagsEXT	flags;
};

struct VkPhysicalDeviceConditionalRenderingFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		conditionalRendering;
	VkBool32		inheritedConditionalRendering;
};

struct VkCommandBufferInheritanceConditionalRenderingInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		conditionalRenderingEnable;
};

struct VkViewportWScalingNV
{
	float	xcoeff;
	float	ycoeff;
};

struct VkPipelineViewportWScalingStateCreateInfoNV
{
	VkStructureType				sType;
	const void*					pNext;
	VkBool32					viewportWScalingEnable;
	uint32_t					viewportCount;
	const VkViewportWScalingNV*	pViewportWScalings;
};

struct VkSurfaceCapabilities2EXT
{
	VkStructureType					sType;
	void*							pNext;
	uint32_t						minImageCount;
	uint32_t						maxImageCount;
	VkExtent2D						currentExtent;
	VkExtent2D						minImageExtent;
	VkExtent2D						maxImageExtent;
	uint32_t						maxImageArrayLayers;
	VkSurfaceTransformFlagsKHR		supportedTransforms;
	VkSurfaceTransformFlagBitsKHR	currentTransform;
	VkCompositeAlphaFlagsKHR		supportedCompositeAlpha;
	VkImageUsageFlags				supportedUsageFlags;
	VkSurfaceCounterFlagsEXT		supportedSurfaceCounters;
};

struct VkDisplayPowerInfoEXT
{
	VkStructureType			sType;
	const void*				pNext;
	VkDisplayPowerStateEXT	powerState;
};

struct VkDeviceEventInfoEXT
{
	VkStructureType			sType;
	const void*				pNext;
	VkDeviceEventTypeEXT	deviceEvent;
};

struct VkDisplayEventInfoEXT
{
	VkStructureType			sType;
	const void*				pNext;
	VkDisplayEventTypeEXT	displayEvent;
};

struct VkSwapchainCounterCreateInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkSurfaceCounterFlagsEXT	surfaceCounters;
};

struct VkRefreshCycleDurationGOOGLE
{
	uint64_t	refreshDuration;
};

struct VkPastPresentationTimingGOOGLE
{
	uint32_t	presentID;
	uint64_t	desiredPresentTime;
	uint64_t	actualPresentTime;
	uint64_t	earliestPresentTime;
	uint64_t	presentMargin;
};

struct VkPresentTimeGOOGLE
{
	uint32_t	presentID;
	uint64_t	desiredPresentTime;
};

struct VkPresentTimesInfoGOOGLE
{
	VkStructureType				sType;
	const void*					pNext;
	uint32_t					swapchainCount;
	const VkPresentTimeGOOGLE*	pTimes;
};

struct VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		perViewPositionAllComponents;
};

struct VkViewportSwizzleNV
{
	VkViewportCoordinateSwizzleNV	x;
	VkViewportCoordinateSwizzleNV	y;
	VkViewportCoordinateSwizzleNV	z;
	VkViewportCoordinateSwizzleNV	w;
};

struct VkPipelineViewportSwizzleStateCreateInfoNV
{
	VkStructureType								sType;
	const void*									pNext;
	VkPipelineViewportSwizzleStateCreateFlagsNV	flags;
	uint32_t									viewportCount;
	const VkViewportSwizzleNV*					pViewportSwizzles;
};

struct VkPhysicalDeviceDiscardRectanglePropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxDiscardRectangles;
};

struct VkPipelineDiscardRectangleStateCreateInfoEXT
{
	VkStructureType									sType;
	const void*										pNext;
	VkPipelineDiscardRectangleStateCreateFlagsEXT	flags;
	VkDiscardRectangleModeEXT						discardRectangleMode;
	uint32_t										discardRectangleCount;
	const VkRect2D*									pDiscardRectangles;
};

struct VkPhysicalDeviceConservativeRasterizationPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	float			primitiveOverestimationSize;
	float			maxExtraPrimitiveOverestimationSize;
	float			extraPrimitiveOverestimationSizeGranularity;
	VkBool32		primitiveUnderestimation;
	VkBool32		conservativePointAndLineRasterization;
	VkBool32		degenerateTrianglesRasterized;
	VkBool32		degenerateLinesRasterized;
	VkBool32		fullyCoveredFragmentShaderInputVariable;
	VkBool32		conservativeRasterizationPostDepthCoverage;
};

struct VkPipelineRasterizationConservativeStateCreateInfoEXT
{
	VkStructureType											sType;
	const void*												pNext;
	VkPipelineRasterizationConservativeStateCreateFlagsEXT	flags;
	VkConservativeRasterizationModeEXT						conservativeRasterizationMode;
	float													extraPrimitiveOverestimationSize;
};

struct VkPhysicalDeviceDepthClipEnableFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		depthClipEnable;
};

struct VkPipelineRasterizationDepthClipStateCreateInfoEXT
{
	VkStructureType										sType;
	const void*											pNext;
	VkPipelineRasterizationDepthClipStateCreateFlagsEXT	flags;
	VkBool32											depthClipEnable;
};

struct VkXYColorEXT
{
	float	x;
	float	y;
};

struct VkHdrMetadataEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkXYColorEXT	displayPrimaryRed;
	VkXYColorEXT	displayPrimaryGreen;
	VkXYColorEXT	displayPrimaryBlue;
	VkXYColorEXT	whitePoint;
	float			maxLuminance;
	float			minLuminance;
	float			maxContentLightLevel;
	float			maxFrameAverageLightLevel;
};

struct VkDebugUtilsLabelEXT
{
	VkStructureType	sType;
	const void*		pNext;
	const char*		pLabelName;
	float			color[4];
};

struct VkDebugUtilsObjectNameInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkObjectType	objectType;
	uint64_t		objectHandle;
	const char*		pObjectName;
};

struct VkDebugUtilsMessengerCallbackDataEXT
{
	VkStructureType								sType;
	const void*									pNext;
	VkDebugUtilsMessengerCallbackDataFlagsEXT	flags;
	const char*									pMessageIdName;
	int32_t										messageIdNumber;
	const char*									pMessage;
	uint32_t									queueLabelCount;
	const VkDebugUtilsLabelEXT*					pQueueLabels;
	uint32_t									cmdBufLabelCount;
	const VkDebugUtilsLabelEXT*					pCmdBufLabels;
	uint32_t									objectCount;
	const VkDebugUtilsObjectNameInfoEXT*		pObjects;
};

struct VkDebugUtilsMessengerCreateInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	VkDebugUtilsMessengerCreateFlagsEXT		flags;
	VkDebugUtilsMessageSeverityFlagsEXT		messageSeverity;
	VkDebugUtilsMessageTypeFlagsEXT			messageType;
	PFN_vkDebugUtilsMessengerCallbackEXT	pfnUserCallback;
	void*									pUserData;
};

struct VkDebugUtilsObjectTagInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkObjectType	objectType;
	uint64_t		objectHandle;
	uint64_t		tagName;
	size_t			tagSize;
	const void*		pTag;
};

struct VkPhysicalDeviceInlineUniformBlockFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		inlineUniformBlock;
	VkBool32		descriptorBindingInlineUniformBlockUpdateAfterBind;
};

struct VkPhysicalDeviceInlineUniformBlockPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxInlineUniformBlockSize;
	uint32_t		maxPerStageDescriptorInlineUniformBlocks;
	uint32_t		maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks;
	uint32_t		maxDescriptorSetInlineUniformBlocks;
	uint32_t		maxDescriptorSetUpdateAfterBindInlineUniformBlocks;
};

struct VkWriteDescriptorSetInlineUniformBlockEXT
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		dataSize;
	const void*		pData;
};

struct VkDescriptorPoolInlineUniformBlockCreateInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		maxInlineUniformBlockBindings;
};

struct VkSampleLocationEXT
{
	float	x;
	float	y;
};

struct VkSampleLocationsInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkSampleCountFlagBits		sampleLocationsPerPixel;
	VkExtent2D					sampleLocationGridSize;
	uint32_t					sampleLocationsCount;
	const VkSampleLocationEXT*	pSampleLocations;
};

struct VkAttachmentSampleLocationsEXT
{
	uint32_t					attachmentIndex;
	VkSampleLocationsInfoEXT	sampleLocationsInfo;
};

struct VkSubpassSampleLocationsEXT
{
	uint32_t					subpassIndex;
	VkSampleLocationsInfoEXT	sampleLocationsInfo;
};

struct VkRenderPassSampleLocationsBeginInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								attachmentInitialSampleLocationsCount;
	const VkAttachmentSampleLocationsEXT*	pAttachmentInitialSampleLocations;
	uint32_t								postSubpassSampleLocationsCount;
	const VkSubpassSampleLocationsEXT*		pPostSubpassSampleLocations;
};

struct VkPipelineSampleLocationsStateCreateInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkBool32					sampleLocationsEnable;
	VkSampleLocationsInfoEXT	sampleLocationsInfo;
};

struct VkPhysicalDeviceSampleLocationsPropertiesEXT
{
	VkStructureType		sType;
	void*				pNext;
	VkSampleCountFlags	sampleLocationSampleCounts;
	VkExtent2D			maxSampleLocationGridSize;
	float				sampleLocationCoordinateRange[2];
	uint32_t			sampleLocationSubPixelBits;
	VkBool32			variableSampleLocations;
};

struct VkMultisamplePropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkExtent2D		maxSampleLocationGridSize;
};

struct VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		advancedBlendCoherentOperations;
};

struct VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		advancedBlendMaxColorAttachments;
	VkBool32		advancedBlendIndependentBlend;
	VkBool32		advancedBlendNonPremultipliedSrcColor;
	VkBool32		advancedBlendNonPremultipliedDstColor;
	VkBool32		advancedBlendCorrelatedOverlap;
	VkBool32		advancedBlendAllOperations;
};

struct VkPipelineColorBlendAdvancedStateCreateInfoEXT
{
	VkStructureType		sType;
	const void*			pNext;
	VkBool32			srcPremultiplied;
	VkBool32			dstPremultiplied;
	VkBlendOverlapEXT	blendOverlap;
};

struct VkPipelineCoverageToColorStateCreateInfoNV
{
	VkStructureType								sType;
	const void*									pNext;
	VkPipelineCoverageToColorStateCreateFlagsNV	flags;
	VkBool32									coverageToColorEnable;
	uint32_t									coverageToColorLocation;
};

struct VkPipelineCoverageModulationStateCreateInfoNV
{
	VkStructureType									sType;
	const void*										pNext;
	VkPipelineCoverageModulationStateCreateFlagsNV	flags;
	VkCoverageModulationModeNV						coverageModulationMode;
	VkBool32										coverageModulationTableEnable;
	uint32_t										coverageModulationTableCount;
	const float*									pCoverageModulationTable;
};

struct VkPhysicalDeviceShaderSMBuiltinsPropertiesNV
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		shaderSMCount;
	uint32_t		shaderWarpsPerSM;
};

struct VkPhysicalDeviceShaderSMBuiltinsFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderSMBuiltins;
};

struct VkDrmFormatModifierPropertiesEXT
{
	uint64_t				drmFormatModifier;
	uint32_t				drmFormatModifierPlaneCount;
	VkFormatFeatureFlags	drmFormatModifierTilingFeatures;
};

struct VkDrmFormatModifierPropertiesListEXT
{
	VkStructureType						sType;
	void*								pNext;
	uint32_t							drmFormatModifierCount;
	VkDrmFormatModifierPropertiesEXT*	pDrmFormatModifierProperties;
};

struct VkPhysicalDeviceImageDrmFormatModifierInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	uint64_t		drmFormatModifier;
	VkSharingMode	sharingMode;
	uint32_t		queueFamilyIndexCount;
	const uint32_t*	pQueueFamilyIndices;
};

struct VkImageDrmFormatModifierListCreateInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		drmFormatModifierCount;
	const uint64_t*	pDrmFormatModifiers;
};

struct VkImageDrmFormatModifierExplicitCreateInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	uint64_t					drmFormatModifier;
	uint32_t					drmFormatModifierPlaneCount;
	const VkSubresourceLayout*	pPlaneLayouts;
};

struct VkImageDrmFormatModifierPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint64_t		drmFormatModifier;
};

struct VkValidationCacheCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkValidationCacheCreateFlagsEXT	flags;
	size_t							initialDataSize;
	const void*						pInitialData;
};

struct VkShaderModuleValidationCacheCreateInfoEXT
{
	VkStructureType			sType;
	const void*				pNext;
	VkValidationCacheEXT	validationCache;
};

struct VkShadingRatePaletteNV
{
	uint32_t							shadingRatePaletteEntryCount;
	const VkShadingRatePaletteEntryNV*	pShadingRatePaletteEntries;
};

struct VkPipelineViewportShadingRateImageStateCreateInfoNV
{
	VkStructureType					sType;
	const void*						pNext;
	VkBool32						shadingRateImageEnable;
	uint32_t						viewportCount;
	const VkShadingRatePaletteNV*	pShadingRatePalettes;
};

struct VkPhysicalDeviceShadingRateImageFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shadingRateImage;
	VkBool32		shadingRateCoarseSampleOrder;
};

struct VkPhysicalDeviceShadingRateImagePropertiesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkExtent2D		shadingRateTexelSize;
	uint32_t		shadingRatePaletteSize;
	uint32_t		shadingRateMaxCoarseSamples;
};

struct VkCoarseSampleLocationNV
{
	uint32_t	pixelX;
	uint32_t	pixelY;
	uint32_t	sample;
};

struct VkCoarseSampleOrderCustomNV
{
	VkShadingRatePaletteEntryNV		shadingRate;
	uint32_t						sampleCount;
	uint32_t						sampleLocationCount;
	const VkCoarseSampleLocationNV*	pSampleLocations;
};

struct VkPipelineViewportCoarseSampleOrderStateCreateInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkCoarseSampleOrderTypeNV			sampleOrderType;
	uint32_t							customSampleOrderCount;
	const VkCoarseSampleOrderCustomNV*	pCustomSampleOrders;
};

struct VkRayTracingShaderGroupCreateInfoNV
{
	VkStructureType					sType;
	const void*						pNext;
	VkRayTracingShaderGroupTypeKHR	type;
	uint32_t						generalShader;
	uint32_t						closestHitShader;
	uint32_t						anyHitShader;
	uint32_t						intersectionShader;
};

struct VkRayTracingPipelineCreateInfoNV
{
	VkStructureType								sType;
	const void*									pNext;
	VkPipelineCreateFlags						flags;
	uint32_t									stageCount;
	const VkPipelineShaderStageCreateInfo*		pStages;
	uint32_t									groupCount;
	const VkRayTracingShaderGroupCreateInfoNV*	pGroups;
	uint32_t									maxRecursionDepth;
	VkPipelineLayout							layout;
	VkPipeline									basePipelineHandle;
	int32_t										basePipelineIndex;
};

struct VkGeometryTrianglesNV
{
	VkStructureType	sType;
	const void*		pNext;
	VkBuffer		vertexData;
	VkDeviceSize	vertexOffset;
	uint32_t		vertexCount;
	VkDeviceSize	vertexStride;
	VkFormat		vertexFormat;
	VkBuffer		indexData;
	VkDeviceSize	indexOffset;
	uint32_t		indexCount;
	VkIndexType		indexType;
	VkBuffer		transformData;
	VkDeviceSize	transformOffset;
};

struct VkGeometryAABBNV
{
	VkStructureType	sType;
	const void*		pNext;
	VkBuffer		aabbData;
	uint32_t		numAABBs;
	uint32_t		stride;
	VkDeviceSize	offset;
};

struct VkGeometryDataNV
{
	VkGeometryTrianglesNV	triangles;
	VkGeometryAABBNV		aabbs;
};

struct VkGeometryNV
{
	VkStructureType		sType;
	const void*			pNext;
	VkGeometryTypeKHR	geometryType;
	VkGeometryDataNV	geometry;
	VkGeometryFlagsKHR	flags;
};

struct VkAccelerationStructureInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkAccelerationStructureTypeNV		type;
	VkBuildAccelerationStructureFlagsNV	flags;
	uint32_t							instanceCount;
	uint32_t							geometryCount;
	const VkGeometryNV*					pGeometries;
};

struct VkAccelerationStructureCreateInfoNV
{
	VkStructureType					sType;
	const void*						pNext;
	VkDeviceSize					compactedSize;
	VkAccelerationStructureInfoNV	info;
};

struct VkBindAccelerationStructureMemoryInfoNV
{
	VkStructureType				sType;
	const void*					pNext;
	VkAccelerationStructureNV	accelerationStructure;
	VkDeviceMemory				memory;
	VkDeviceSize				memoryOffset;
	uint32_t					deviceIndexCount;
	const uint32_t*				pDeviceIndices;
};

struct VkWriteDescriptorSetAccelerationStructureNV
{
	VkStructureType						sType;
	const void*							pNext;
	uint32_t							accelerationStructureCount;
	const VkAccelerationStructureNV*	pAccelerationStructures;
};

struct VkAccelerationStructureMemoryRequirementsInfoNV
{
	VkStructureType									sType;
	const void*										pNext;
	VkAccelerationStructureMemoryRequirementsTypeNV	type;
	VkAccelerationStructureNV						accelerationStructure;
};

struct VkPhysicalDeviceRayTracingPropertiesNV
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		shaderGroupHandleSize;
	uint32_t		maxRecursionDepth;
	uint32_t		maxShaderGroupStride;
	uint32_t		shaderGroupBaseAlignment;
	uint64_t		maxGeometryCount;
	uint64_t		maxInstanceCount;
	uint64_t		maxTriangleCount;
	uint32_t		maxDescriptorSetAccelerationStructures;
};

struct VkTransformMatrixKHR
{
	float	matrix[3][4];
};

struct VkAabbPositionsKHR
{
	float	minX;
	float	minY;
	float	minZ;
	float	maxX;
	float	maxY;
	float	maxZ;
};

struct VkAccelerationStructureInstanceKHR
{
	VkTransformMatrixKHR		transform;
	uint32_t					instanceCustomIndex:24;
	uint32_t					mask:8;
	uint32_t					instanceShaderBindingTableRecordOffset:24;
	VkGeometryInstanceFlagsKHR	flags:8;
	uint64_t					accelerationStructureReference;
};

struct VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		representativeFragmentTest;
};

struct VkPipelineRepresentativeFragmentTestStateCreateInfoNV
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		representativeFragmentTestEnable;
};

struct VkPhysicalDeviceImageViewImageFormatInfoEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkImageViewType	imageViewType;
};

struct VkFilterCubicImageViewImageFormatPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		filterCubic;
	VkBool32		filterCubicMinmax;
};

struct VkDeviceQueueGlobalPriorityCreateInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkQueueGlobalPriorityEXT	globalPriority;
};

struct VkImportMemoryHostPointerInfoEXT
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
	void*								pHostPointer;
};

struct VkMemoryHostPointerPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		memoryTypeBits;
};

struct VkPhysicalDeviceExternalMemoryHostPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkDeviceSize	minImportedHostPointerAlignment;
};

struct VkPipelineCompilerControlCreateInfoAMD
{
	VkStructureType						sType;
	const void*							pNext;
	VkPipelineCompilerControlFlagsAMD	compilerControlFlags;
};

struct VkCalibratedTimestampInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkTimeDomainEXT	timeDomain;
};

struct VkPhysicalDeviceShaderCorePropertiesAMD
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		shaderEngineCount;
	uint32_t		shaderArraysPerEngineCount;
	uint32_t		computeUnitsPerShaderArray;
	uint32_t		simdPerComputeUnit;
	uint32_t		wavefrontsPerSimd;
	uint32_t		wavefrontSize;
	uint32_t		sgprsPerSimd;
	uint32_t		minSgprAllocation;
	uint32_t		maxSgprAllocation;
	uint32_t		sgprAllocationGranularity;
	uint32_t		vgprsPerSimd;
	uint32_t		minVgprAllocation;
	uint32_t		maxVgprAllocation;
	uint32_t		vgprAllocationGranularity;
};

struct VkDeviceMemoryOverallocationCreateInfoAMD
{
	VkStructureType						sType;
	const void*							pNext;
	VkMemoryOverallocationBehaviorAMD	overallocationBehavior;
};

struct VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxVertexAttribDivisor;
};

struct VkVertexInputBindingDivisorDescriptionEXT
{
	uint32_t	binding;
	uint32_t	divisor;
};

struct VkPipelineVertexInputDivisorStateCreateInfoEXT
{
	VkStructureType										sType;
	const void*											pNext;
	uint32_t											vertexBindingDivisorCount;
	const VkVertexInputBindingDivisorDescriptionEXT*	pVertexBindingDivisors;
};

struct VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		vertexAttributeInstanceRateDivisor;
	VkBool32		vertexAttributeInstanceRateZeroDivisor;
};

struct VkPipelineCreationFeedbackEXT
{
	VkPipelineCreationFeedbackFlagsEXT	flags;
	uint64_t							duration;
};

struct VkPipelineCreationFeedbackCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkPipelineCreationFeedbackEXT*	pPipelineCreationFeedback;
	uint32_t						pipelineStageCreationFeedbackCount;
	VkPipelineCreationFeedbackEXT*	pPipelineStageCreationFeedbacks;
};

struct VkPhysicalDeviceComputeShaderDerivativesFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		computeDerivativeGroupQuads;
	VkBool32		computeDerivativeGroupLinear;
};

struct VkPhysicalDeviceMeshShaderFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		taskShader;
	VkBool32		meshShader;
};

struct VkPhysicalDeviceMeshShaderPropertiesNV
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxDrawMeshTasksCount;
	uint32_t		maxTaskWorkGroupInvocations;
	uint32_t		maxTaskWorkGroupSize[3];
	uint32_t		maxTaskTotalMemorySize;
	uint32_t		maxTaskOutputCount;
	uint32_t		maxMeshWorkGroupInvocations;
	uint32_t		maxMeshWorkGroupSize[3];
	uint32_t		maxMeshTotalMemorySize;
	uint32_t		maxMeshOutputVertices;
	uint32_t		maxMeshOutputPrimitives;
	uint32_t		maxMeshMultiviewViewCount;
	uint32_t		meshOutputPerVertexGranularity;
	uint32_t		meshOutputPerPrimitiveGranularity;
};

struct VkDrawMeshTasksIndirectCommandNV
{
	uint32_t	taskCount;
	uint32_t	firstTask;
};

struct VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		fragmentShaderBarycentric;
};

struct VkPhysicalDeviceShaderImageFootprintFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		imageFootprint;
};

struct VkPipelineViewportExclusiveScissorStateCreateInfoNV
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		exclusiveScissorCount;
	const VkRect2D*	pExclusiveScissors;
};

struct VkPhysicalDeviceExclusiveScissorFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		exclusiveScissor;
};

struct VkQueueFamilyCheckpointPropertiesNV
{
	VkStructureType			sType;
	void*					pNext;
	VkPipelineStageFlags	checkpointExecutionStageMask;
};

struct VkCheckpointDataNV
{
	VkStructureType			sType;
	void*					pNext;
	VkPipelineStageFlagBits	stage;
	void*					pCheckpointMarker;
};

struct VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderIntegerFunctions2;
};

union VkPerformanceValueDataINTEL
{
	uint32_t	value32;
	uint64_t	value64;
	float		valueFloat;
	VkBool32	valueBool;
	const char*	valueString;
};

struct VkPerformanceValueINTEL
{
	VkPerformanceValueTypeINTEL	type;
	VkPerformanceValueDataINTEL	data;
};

struct VkInitializePerformanceApiInfoINTEL
{
	VkStructureType	sType;
	const void*		pNext;
	void*			pUserData;
};

struct VkQueryPoolPerformanceQueryCreateInfoINTEL
{
	VkStructureType					sType;
	const void*						pNext;
	VkQueryPoolSamplingModeINTEL	performanceCountersSampling;
};

struct VkPerformanceMarkerInfoINTEL
{
	VkStructureType	sType;
	const void*		pNext;
	uint64_t		marker;
};

struct VkPerformanceStreamMarkerInfoINTEL
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		marker;
};

struct VkPerformanceOverrideInfoINTEL
{
	VkStructureType					sType;
	const void*						pNext;
	VkPerformanceOverrideTypeINTEL	type;
	VkBool32						enable;
	uint64_t						parameter;
};

struct VkPerformanceConfigurationAcquireInfoINTEL
{
	VkStructureType						sType;
	const void*							pNext;
	VkPerformanceConfigurationTypeINTEL	type;
};

struct VkPhysicalDevicePCIBusInfoPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		pciDomain;
	uint32_t		pciBus;
	uint32_t		pciDevice;
	uint32_t		pciFunction;
};

struct VkDisplayNativeHdrSurfaceCapabilitiesAMD
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		localDimmingSupport;
};

struct VkSwapchainDisplayNativeHdrCreateInfoAMD
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		localDimmingEnable;
};

struct VkPhysicalDeviceFragmentDensityMapFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		fragmentDensityMap;
	VkBool32		fragmentDensityMapDynamic;
	VkBool32		fragmentDensityMapNonSubsampledImages;
};

struct VkPhysicalDeviceFragmentDensityMapPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkExtent2D		minFragmentDensityTexelSize;
	VkExtent2D		maxFragmentDensityTexelSize;
	VkBool32		fragmentDensityInvocations;
};

struct VkRenderPassFragmentDensityMapCreateInfoEXT
{
	VkStructureType			sType;
	const void*				pNext;
	VkAttachmentReference	fragmentDensityMapAttachment;
};

struct VkPhysicalDeviceSubgroupSizeControlFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		subgroupSizeControl;
	VkBool32		computeFullSubgroups;
};

struct VkPhysicalDeviceSubgroupSizeControlPropertiesEXT
{
	VkStructureType		sType;
	void*				pNext;
	uint32_t			minSubgroupSize;
	uint32_t			maxSubgroupSize;
	uint32_t			maxComputeWorkgroupSubgroups;
	VkShaderStageFlags	requiredSubgroupSizeStages;
};

struct VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		requiredSubgroupSize;
};

struct VkPhysicalDeviceShaderCoreProperties2AMD
{
	VkStructureType					sType;
	void*							pNext;
	VkShaderCorePropertiesFlagsAMD	shaderCoreFeatures;
	uint32_t						activeComputeUnitCount;
};

struct VkPhysicalDeviceCoherentMemoryFeaturesAMD
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		deviceCoherentMemory;
};

struct VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderImageInt64Atomics;
	VkBool32		sparseImageInt64Atomics;
};

struct VkPhysicalDeviceMemoryBudgetPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkDeviceSize	heapBudget[VK_MAX_MEMORY_HEAPS];
	VkDeviceSize	heapUsage[VK_MAX_MEMORY_HEAPS];
};

struct VkPhysicalDeviceMemoryPriorityFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		memoryPriority;
};

struct VkMemoryPriorityAllocateInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	float			priority;
};

struct VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		dedicatedAllocationImageAliasing;
};

struct VkPhysicalDeviceBufferDeviceAddressFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		bufferDeviceAddress;
	VkBool32		bufferDeviceAddressCaptureReplay;
	VkBool32		bufferDeviceAddressMultiDevice;
};

struct VkBufferDeviceAddressCreateInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkDeviceAddress	deviceAddress;
};

struct VkPhysicalDeviceToolPropertiesEXT
{
	VkStructureType			sType;
	void*					pNext;
	char					name[VK_MAX_EXTENSION_NAME_SIZE];
	char					version[VK_MAX_EXTENSION_NAME_SIZE];
	VkToolPurposeFlagsEXT	purposes;
	char					description[VK_MAX_DESCRIPTION_SIZE];
	char					layer[VK_MAX_EXTENSION_NAME_SIZE];
};

struct VkValidationFeaturesEXT
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								enabledValidationFeatureCount;
	const VkValidationFeatureEnableEXT*		pEnabledValidationFeatures;
	uint32_t								disabledValidationFeatureCount;
	const VkValidationFeatureDisableEXT*	pDisabledValidationFeatures;
};

struct VkCooperativeMatrixPropertiesNV
{
	VkStructureType		sType;
	void*				pNext;
	uint32_t			MSize;
	uint32_t			NSize;
	uint32_t			KSize;
	VkComponentTypeNV	AType;
	VkComponentTypeNV	BType;
	VkComponentTypeNV	CType;
	VkComponentTypeNV	DType;
	VkScopeNV			scope;
};

struct VkPhysicalDeviceCooperativeMatrixFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		cooperativeMatrix;
	VkBool32		cooperativeMatrixRobustBufferAccess;
};

struct VkPhysicalDeviceCooperativeMatrixPropertiesNV
{
	VkStructureType		sType;
	void*				pNext;
	VkShaderStageFlags	cooperativeMatrixSupportedStages;
};

struct VkPhysicalDeviceCoverageReductionModeFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		coverageReductionMode;
};

struct VkPipelineCoverageReductionStateCreateInfoNV
{
	VkStructureType									sType;
	const void*										pNext;
	VkPipelineCoverageReductionStateCreateFlagsNV	flags;
	VkCoverageReductionModeNV						coverageReductionMode;
};

struct VkFramebufferMixedSamplesCombinationNV
{
	VkStructureType				sType;
	void*						pNext;
	VkCoverageReductionModeNV	coverageReductionMode;
	VkSampleCountFlagBits		rasterizationSamples;
	VkSampleCountFlags			depthStencilSamples;
	VkSampleCountFlags			colorSamples;
};

struct VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		fragmentShaderSampleInterlock;
	VkBool32		fragmentShaderPixelInterlock;
	VkBool32		fragmentShaderShadingRateInterlock;
};

struct VkPhysicalDeviceYcbcrImageArraysFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		ycbcrImageArrays;
};

struct VkPhysicalDeviceProvokingVertexFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		provokingVertexLast;
	VkBool32		transformFeedbackPreservesProvokingVertex;
};

struct VkPhysicalDeviceProvokingVertexPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		provokingVertexModePerPipeline;
	VkBool32		transformFeedbackPreservesTriangleFanProvokingVertex;
};

struct VkPipelineRasterizationProvokingVertexStateCreateInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkProvokingVertexModeEXT	provokingVertexMode;
};

struct VkHeadlessSurfaceCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkHeadlessSurfaceCreateFlagsEXT	flags;
};

struct VkPhysicalDeviceLineRasterizationFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		rectangularLines;
	VkBool32		bresenhamLines;
	VkBool32		smoothLines;
	VkBool32		stippledRectangularLines;
	VkBool32		stippledBresenhamLines;
	VkBool32		stippledSmoothLines;
};

struct VkPhysicalDeviceLineRasterizationPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		lineSubPixelPrecisionBits;
};

struct VkPipelineRasterizationLineStateCreateInfoEXT
{
	VkStructureType				sType;
	const void*					pNext;
	VkLineRasterizationModeEXT	lineRasterizationMode;
	VkBool32					stippledLineEnable;
	uint32_t					lineStippleFactor;
	uint16_t					lineStipplePattern;
};

struct VkPhysicalDeviceShaderAtomicFloatFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderBufferFloat32Atomics;
	VkBool32		shaderBufferFloat32AtomicAdd;
	VkBool32		shaderBufferFloat64Atomics;
	VkBool32		shaderBufferFloat64AtomicAdd;
	VkBool32		shaderSharedFloat32Atomics;
	VkBool32		shaderSharedFloat32AtomicAdd;
	VkBool32		shaderSharedFloat64Atomics;
	VkBool32		shaderSharedFloat64AtomicAdd;
	VkBool32		shaderImageFloat32Atomics;
	VkBool32		shaderImageFloat32AtomicAdd;
	VkBool32		sparseImageFloat32Atomics;
	VkBool32		sparseImageFloat32AtomicAdd;
};

struct VkPhysicalDeviceIndexTypeUint8FeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		indexTypeUint8;
};

struct VkPhysicalDeviceExtendedDynamicStateFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		extendedDynamicState;
};

struct VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderBufferFloat16Atomics;
	VkBool32		shaderBufferFloat16AtomicAdd;
	VkBool32		shaderBufferFloat16AtomicMinMax;
	VkBool32		shaderBufferFloat32AtomicMinMax;
	VkBool32		shaderBufferFloat64AtomicMinMax;
	VkBool32		shaderSharedFloat16Atomics;
	VkBool32		shaderSharedFloat16AtomicAdd;
	VkBool32		shaderSharedFloat16AtomicMinMax;
	VkBool32		shaderSharedFloat32AtomicMinMax;
	VkBool32		shaderSharedFloat64AtomicMinMax;
	VkBool32		shaderImageFloat32AtomicMinMax;
	VkBool32		sparseImageFloat32AtomicMinMax;
};

struct VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		shaderDemoteToHelperInvocation;
};

struct VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxGraphicsShaderGroupCount;
	uint32_t		maxIndirectSequenceCount;
	uint32_t		maxIndirectCommandsTokenCount;
	uint32_t		maxIndirectCommandsStreamCount;
	uint32_t		maxIndirectCommandsTokenOffset;
	uint32_t		maxIndirectCommandsStreamStride;
	uint32_t		minSequencesCountBufferOffsetAlignment;
	uint32_t		minSequencesIndexBufferOffsetAlignment;
	uint32_t		minIndirectCommandsBufferOffsetAlignment;
};

struct VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		deviceGeneratedCommands;
};

struct VkGraphicsShaderGroupCreateInfoNV
{
	VkStructureType									sType;
	const void*										pNext;
	uint32_t										stageCount;
	const VkPipelineShaderStageCreateInfo*			pStages;
	const VkPipelineVertexInputStateCreateInfo*		pVertexInputState;
	const VkPipelineTessellationStateCreateInfo*	pTessellationState;
};

struct VkGraphicsPipelineShaderGroupsCreateInfoNV
{
	VkStructureType								sType;
	const void*									pNext;
	uint32_t									groupCount;
	const VkGraphicsShaderGroupCreateInfoNV*	pGroups;
	uint32_t									pipelineCount;
	const VkPipeline*							pPipelines;
};

struct VkBindShaderGroupIndirectCommandNV
{
	uint32_t	groupIndex;
};

struct VkBindIndexBufferIndirectCommandNV
{
	VkDeviceAddress	bufferAddress;
	uint32_t		size;
	VkIndexType		indexType;
};

struct VkBindVertexBufferIndirectCommandNV
{
	VkDeviceAddress	bufferAddress;
	uint32_t		size;
	uint32_t		stride;
};

struct VkSetStateFlagsIndirectCommandNV
{
	uint32_t	data;
};

struct VkIndirectCommandsStreamNV
{
	VkBuffer		buffer;
	VkDeviceSize	offset;
};

struct VkIndirectCommandsLayoutTokenNV
{
	VkStructureType					sType;
	const void*						pNext;
	VkIndirectCommandsTokenTypeNV	tokenType;
	uint32_t						stream;
	uint32_t						offset;
	uint32_t						vertexBindingUnit;
	VkBool32						vertexDynamicStride;
	VkPipelineLayout				pushconstantPipelineLayout;
	VkShaderStageFlags				pushconstantShaderStageFlags;
	uint32_t						pushconstantOffset;
	uint32_t						pushconstantSize;
	VkIndirectStateFlagsNV			indirectStateFlags;
	uint32_t						indexTypeCount;
	const VkIndexType*				pIndexTypes;
	const uint32_t*					pIndexTypeValues;
};

struct VkIndirectCommandsLayoutCreateInfoNV
{
	VkStructureType							sType;
	const void*								pNext;
	VkIndirectCommandsLayoutUsageFlagsNV	flags;
	VkPipelineBindPoint						pipelineBindPoint;
	uint32_t								tokenCount;
	const VkIndirectCommandsLayoutTokenNV*	pTokens;
	uint32_t								streamCount;
	const uint32_t*							pStreamStrides;
};

struct VkGeneratedCommandsInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkPipelineBindPoint					pipelineBindPoint;
	VkPipeline							pipeline;
	VkIndirectCommandsLayoutNV			indirectCommandsLayout;
	uint32_t							streamCount;
	const VkIndirectCommandsStreamNV*	pStreams;
	uint32_t							sequencesCount;
	VkBuffer							preprocessBuffer;
	VkDeviceSize						preprocessOffset;
	VkDeviceSize						preprocessSize;
	VkBuffer							sequencesCountBuffer;
	VkDeviceSize						sequencesCountOffset;
	VkBuffer							sequencesIndexBuffer;
	VkDeviceSize						sequencesIndexOffset;
};

struct VkGeneratedCommandsMemoryRequirementsInfoNV
{
	VkStructureType				sType;
	const void*					pNext;
	VkPipelineBindPoint			pipelineBindPoint;
	VkPipeline					pipeline;
	VkIndirectCommandsLayoutNV	indirectCommandsLayout;
	uint32_t					maxSequencesCount;
};

struct VkPhysicalDeviceInheritedViewportScissorFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		inheritedViewportScissor2D;
};

struct VkCommandBufferInheritanceViewportScissorInfoNV
{
	VkStructureType		sType;
	const void*			pNext;
	VkBool32			viewportScissor2D;
	uint32_t			viewportDepthCount;
	const VkViewport*	pViewportDepths;
};

struct VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		texelBufferAlignment;
};

struct VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkDeviceSize	storageTexelBufferOffsetAlignmentBytes;
	VkBool32		storageTexelBufferOffsetSingleTexelAlignment;
	VkDeviceSize	uniformTexelBufferOffsetAlignmentBytes;
	VkBool32		uniformTexelBufferOffsetSingleTexelAlignment;
};

struct VkRenderPassTransformBeginInfoQCOM
{
	VkStructureType					sType;
	void*							pNext;
	VkSurfaceTransformFlagBitsKHR	transform;
};

struct VkCommandBufferInheritanceRenderPassTransformInfoQCOM
{
	VkStructureType					sType;
	void*							pNext;
	VkSurfaceTransformFlagBitsKHR	transform;
	VkRect2D						renderArea;
};

struct VkPhysicalDeviceDeviceMemoryReportFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		deviceMemoryReport;
};

struct VkDeviceMemoryReportCallbackDataEXT
{
	VkStructureType						sType;
	void*								pNext;
	VkDeviceMemoryReportFlagsEXT		flags;
	VkDeviceMemoryReportEventTypeEXT	type;
	uint64_t							memoryObjectId;
	VkDeviceSize						size;
	VkObjectType						objectType;
	uint64_t							objectHandle;
	uint32_t							heapIndex;
};

struct VkDeviceDeviceMemoryReportCreateInfoEXT
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceMemoryReportFlagsEXT		flags;
	PFN_vkDeviceMemoryReportCallbackEXT	pfnUserCallback;
	void*								pUserData;
};

struct VkPhysicalDeviceRobustness2FeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		robustBufferAccess2;
	VkBool32		robustImageAccess2;
	VkBool32		nullDescriptor;
};

struct VkPhysicalDeviceRobustness2PropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkDeviceSize	robustStorageBufferAccessSizeAlignment;
	VkDeviceSize	robustUniformBufferAccessSizeAlignment;
};

struct VkSamplerCustomBorderColorCreateInfoEXT
{
	VkStructureType		sType;
	const void*			pNext;
	VkClearColorValue	customBorderColor;
	VkFormat			format;
};

struct VkPhysicalDeviceCustomBorderColorPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxCustomBorderColorSamplers;
};

struct VkPhysicalDeviceCustomBorderColorFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		customBorderColors;
	VkBool32		customBorderColorWithoutFormat;
};

struct VkPhysicalDevicePrivateDataFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		privateData;
};

struct VkDevicePrivateDataCreateInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		privateDataSlotRequestCount;
};

struct VkPrivateDataSlotCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkPrivateDataSlotCreateFlagsEXT	flags;
};

struct VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		pipelineCreationCacheControl;
};

struct VkPhysicalDeviceDiagnosticsConfigFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		diagnosticsConfig;
};

struct VkDeviceDiagnosticsConfigCreateInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceDiagnosticsConfigFlagsNV	flags;
};

struct VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		fragmentShadingRateEnums;
	VkBool32		supersampleFragmentShadingRates;
	VkBool32		noInvocationFragmentShadingRates;
};

struct VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV
{
	VkStructureType			sType;
	void*					pNext;
	VkSampleCountFlagBits	maxFragmentShadingRateInvocationCount;
};

struct VkPipelineFragmentShadingRateEnumStateCreateInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkFragmentShadingRateTypeNV			shadingRateType;
	VkFragmentShadingRateNV				shadingRate;
	VkFragmentShadingRateCombinerOpKHR	combinerOps[2];
};

union VkDeviceOrHostAddressConstKHR
{
	VkDeviceAddress	deviceAddress;
	const void*		hostAddress;
};

struct VkAccelerationStructureGeometryMotionTrianglesDataNV
{
	VkStructureType					sType;
	const void*						pNext;
	VkDeviceOrHostAddressConstKHR	vertexData;
};

struct VkAccelerationStructureMotionInfoNV
{
	VkStructureType								sType;
	const void*									pNext;
	uint32_t									maxInstances;
	VkAccelerationStructureMotionInfoFlagsNV	flags;
};

struct VkAccelerationStructureMatrixMotionInstanceNV
{
	VkTransformMatrixKHR		transformT0;
	VkTransformMatrixKHR		transformT1;
	uint32_t					instanceCustomIndex:24;
	uint32_t					mask:8;
	uint32_t					instanceShaderBindingTableRecordOffset:24;
	VkGeometryInstanceFlagsKHR	flags:8;
	uint64_t					accelerationStructureReference;
};

struct VkSRTDataNV
{
	float	sx;
	float	a;
	float	b;
	float	pvx;
	float	sy;
	float	c;
	float	pvy;
	float	sz;
	float	pvz;
	float	qx;
	float	qy;
	float	qz;
	float	qw;
	float	tx;
	float	ty;
	float	tz;
};

struct VkAccelerationStructureSRTMotionInstanceNV
{
	VkSRTDataNV					transformT0;
	VkSRTDataNV					transformT1;
	uint32_t					instanceCustomIndex:24;
	uint32_t					mask:8;
	uint32_t					instanceShaderBindingTableRecordOffset:24;
	VkGeometryInstanceFlagsKHR	flags:8;
	uint64_t					accelerationStructureReference;
};

union VkAccelerationStructureMotionInstanceDataNV
{
	VkAccelerationStructureInstanceKHR				staticInstance;
	VkAccelerationStructureMatrixMotionInstanceNV	matrixMotionInstance;
	VkAccelerationStructureSRTMotionInstanceNV		srtMotionInstance;
};

struct VkAccelerationStructureMotionInstanceNV
{
	VkAccelerationStructureMotionInstanceTypeNV		type;
	VkAccelerationStructureMotionInstanceFlagsNV	flags;
	VkAccelerationStructureMotionInstanceDataNV		data;
};

struct VkPhysicalDeviceRayTracingMotionBlurFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		rayTracingMotionBlur;
	VkBool32		rayTracingMotionBlurPipelineTraceRaysIndirect;
};

struct VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		ycbcr2plane444Formats;
};

struct VkPhysicalDeviceFragmentDensityMap2FeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		fragmentDensityMapDeferred;
};

struct VkPhysicalDeviceFragmentDensityMap2PropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		subsampledLoads;
	VkBool32		subsampledCoarseReconstructionEarlyAccess;
	uint32_t		maxSubsampledArrayLayers;
	uint32_t		maxDescriptorSetSubsampledSamplers;
};

struct VkCopyCommandTransformInfoQCOM
{
	VkStructureType					sType;
	const void*						pNext;
	VkSurfaceTransformFlagBitsKHR	transform;
};

struct VkPhysicalDeviceImageRobustnessFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		robustImageAccess;
};

struct VkPhysicalDevice4444FormatsFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		formatA4R4G4B4;
	VkBool32		formatA4B4G4R4;
};

struct VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		mutableDescriptorType;
};

struct VkMutableDescriptorTypeListVALVE
{
	uint32_t				descriptorTypeCount;
	const VkDescriptorType*	pDescriptorTypes;
};

struct VkMutableDescriptorTypeCreateInfoVALVE
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								mutableDescriptorTypeListCount;
	const VkMutableDescriptorTypeListVALVE*	pMutableDescriptorTypeLists;
};

struct VkPhysicalDeviceDepthClipControlFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		depthClipControl;
};

struct VkPipelineViewportDepthClipControlCreateInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	VkBool32		negativeOneToOne;
};

struct VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		vertexInputDynamicState;
};

struct VkVertexInputBindingDescription2EXT
{
	VkStructureType		sType;
	void*				pNext;
	uint32_t			binding;
	uint32_t			stride;
	VkVertexInputRate	inputRate;
	uint32_t			divisor;
};

struct VkVertexInputAttributeDescription2EXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		location;
	uint32_t		binding;
	VkFormat		format;
	uint32_t		offset;
};

struct VkPhysicalDeviceDrmPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		hasPrimary;
	VkBool32		hasRender;
	int64_t			primaryMajor;
	int64_t			primaryMinor;
	int64_t			renderMajor;
	int64_t			renderMinor;
};

struct VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		primitiveTopologyListRestart;
	VkBool32		primitiveTopologyPatchListRestart;
};

struct VkSubpassShadingPipelineCreateInfoHUAWEI
{
	VkStructureType	sType;
	void*			pNext;
	VkRenderPass	renderPass;
	uint32_t		subpass;
};

struct VkPhysicalDeviceSubpassShadingFeaturesHUAWEI
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		subpassShading;
};

struct VkPhysicalDeviceSubpassShadingPropertiesHUAWEI
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxSubpassShadingWorkgroupSizeAspectRatio;
};

struct VkPhysicalDeviceInvocationMaskFeaturesHUAWEI
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		invocationMask;
};

struct VkMemoryGetRemoteAddressInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceMemory						memory;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

struct VkPhysicalDeviceExternalMemoryRDMAFeaturesNV
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		externalMemoryRDMA;
};

struct VkPhysicalDeviceExtendedDynamicState2FeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		extendedDynamicState2;
	VkBool32		extendedDynamicState2LogicOp;
	VkBool32		extendedDynamicState2PatchControlPoints;
};

struct VkPhysicalDeviceColorWriteEnableFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		colorWriteEnable;
};

struct VkPipelineColorWriteCreateInfoEXT
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		attachmentCount;
	const VkBool32*	pColorWriteEnables;
};

struct VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		globalPriorityQuery;
};

struct VkQueueFamilyGlobalPriorityPropertiesEXT
{
	VkStructureType				sType;
	void*						pNext;
	uint32_t					priorityCount;
	VkQueueGlobalPriorityEXT	priorities[VK_MAX_GLOBAL_PRIORITY_SIZE_EXT];
};

struct VkPhysicalDeviceMultiDrawFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		multiDraw;
};

struct VkPhysicalDeviceMultiDrawPropertiesEXT
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		maxMultiDrawCount;
};

struct VkMultiDrawInfoEXT
{
	uint32_t	firstVertex;
	uint32_t	vertexCount;
};

struct VkMultiDrawIndexedInfoEXT
{
	uint32_t	firstIndex;
	uint32_t	indexCount;
	int32_t		vertexOffset;
};

struct VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		pageableDeviceLocalMemory;
};

union VkDeviceOrHostAddressKHR
{
	VkDeviceAddress	deviceAddress;
	void*			hostAddress;
};

struct VkAccelerationStructureBuildRangeInfoKHR
{
	uint32_t	primitiveCount;
	uint32_t	primitiveOffset;
	uint32_t	firstVertex;
	uint32_t	transformOffset;
};

struct VkAccelerationStructureGeometryTrianglesDataKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkFormat						vertexFormat;
	VkDeviceOrHostAddressConstKHR	vertexData;
	VkDeviceSize					vertexStride;
	uint32_t						maxVertex;
	VkIndexType						indexType;
	VkDeviceOrHostAddressConstKHR	indexData;
	VkDeviceOrHostAddressConstKHR	transformData;
};

struct VkAccelerationStructureGeometryAabbsDataKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkDeviceOrHostAddressConstKHR	data;
	VkDeviceSize					stride;
};

struct VkAccelerationStructureGeometryInstancesDataKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkBool32						arrayOfPointers;
	VkDeviceOrHostAddressConstKHR	data;
};

union VkAccelerationStructureGeometryDataKHR
{
	VkAccelerationStructureGeometryTrianglesDataKHR	triangles;
	VkAccelerationStructureGeometryAabbsDataKHR		aabbs;
	VkAccelerationStructureGeometryInstancesDataKHR	instances;
};

struct VkAccelerationStructureGeometryKHR
{
	VkStructureType							sType;
	const void*								pNext;
	VkGeometryTypeKHR						geometryType;
	VkAccelerationStructureGeometryDataKHR	geometry;
	VkGeometryFlagsKHR						flags;
};

struct VkAccelerationStructureBuildGeometryInfoKHR
{
	VkStructureType										sType;
	const void*											pNext;
	VkAccelerationStructureTypeKHR						type;
	VkBuildAccelerationStructureFlagsKHR				flags;
	VkBuildAccelerationStructureModeKHR					mode;
	VkAccelerationStructureKHR							srcAccelerationStructure;
	VkAccelerationStructureKHR							dstAccelerationStructure;
	uint32_t											geometryCount;
	const VkAccelerationStructureGeometryKHR*			pGeometries;
	const VkAccelerationStructureGeometryKHR* const*	ppGeometries;
	VkDeviceOrHostAddressKHR							scratchData;
};

struct VkAccelerationStructureCreateInfoKHR
{
	VkStructureType							sType;
	const void*								pNext;
	VkAccelerationStructureCreateFlagsKHR	createFlags;
	VkBuffer								buffer;
	VkDeviceSize							offset;
	VkDeviceSize							size;
	VkAccelerationStructureTypeKHR			type;
	VkDeviceAddress							deviceAddress;
};

struct VkWriteDescriptorSetAccelerationStructureKHR
{
	VkStructureType						sType;
	const void*							pNext;
	uint32_t							accelerationStructureCount;
	const VkAccelerationStructureKHR*	pAccelerationStructures;
};

struct VkPhysicalDeviceAccelerationStructureFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		accelerationStructure;
	VkBool32		accelerationStructureCaptureReplay;
	VkBool32		accelerationStructureIndirectBuild;
	VkBool32		accelerationStructureHostCommands;
	VkBool32		descriptorBindingAccelerationStructureUpdateAfterBind;
};

struct VkPhysicalDeviceAccelerationStructurePropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	uint64_t		maxGeometryCount;
	uint64_t		maxInstanceCount;
	uint64_t		maxPrimitiveCount;
	uint32_t		maxPerStageDescriptorAccelerationStructures;
	uint32_t		maxPerStageDescriptorUpdateAfterBindAccelerationStructures;
	uint32_t		maxDescriptorSetAccelerationStructures;
	uint32_t		maxDescriptorSetUpdateAfterBindAccelerationStructures;
	uint32_t		minAccelerationStructureScratchOffsetAlignment;
};

struct VkAccelerationStructureDeviceAddressInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkAccelerationStructureKHR	accelerationStructure;
};

struct VkAccelerationStructureVersionInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	const uint8_t*	pVersionData;
};

struct VkCopyAccelerationStructureToMemoryInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkAccelerationStructureKHR			src;
	VkDeviceOrHostAddressKHR			dst;
	VkCopyAccelerationStructureModeKHR	mode;
};

struct VkCopyMemoryToAccelerationStructureInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceOrHostAddressConstKHR		src;
	VkAccelerationStructureKHR			dst;
	VkCopyAccelerationStructureModeKHR	mode;
};

struct VkCopyAccelerationStructureInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkAccelerationStructureKHR			src;
	VkAccelerationStructureKHR			dst;
	VkCopyAccelerationStructureModeKHR	mode;
};

struct VkAccelerationStructureBuildSizesInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkDeviceSize	accelerationStructureSize;
	VkDeviceSize	updateScratchSize;
	VkDeviceSize	buildScratchSize;
};

struct VkRayTracingShaderGroupCreateInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkRayTracingShaderGroupTypeKHR	type;
	uint32_t						generalShader;
	uint32_t						closestHitShader;
	uint32_t						anyHitShader;
	uint32_t						intersectionShader;
	const void*						pShaderGroupCaptureReplayHandle;
};

struct VkRayTracingPipelineInterfaceCreateInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		maxPipelineRayPayloadSize;
	uint32_t		maxPipelineRayHitAttributeSize;
};

struct VkRayTracingPipelineCreateInfoKHR
{
	VkStructureType										sType;
	const void*											pNext;
	VkPipelineCreateFlags								flags;
	uint32_t											stageCount;
	const VkPipelineShaderStageCreateInfo*				pStages;
	uint32_t											groupCount;
	const VkRayTracingShaderGroupCreateInfoKHR*			pGroups;
	uint32_t											maxPipelineRayRecursionDepth;
	const VkPipelineLibraryCreateInfoKHR*				pLibraryInfo;
	const VkRayTracingPipelineInterfaceCreateInfoKHR*	pLibraryInterface;
	const VkPipelineDynamicStateCreateInfo*				pDynamicState;
	VkPipelineLayout									layout;
	VkPipeline											basePipelineHandle;
	int32_t												basePipelineIndex;
};

struct VkPhysicalDeviceRayTracingPipelineFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		rayTracingPipeline;
	VkBool32		rayTracingPipelineShaderGroupHandleCaptureReplay;
	VkBool32		rayTracingPipelineShaderGroupHandleCaptureReplayMixed;
	VkBool32		rayTracingPipelineTraceRaysIndirect;
	VkBool32		rayTraversalPrimitiveCulling;
};

struct VkPhysicalDeviceRayTracingPipelinePropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		shaderGroupHandleSize;
	uint32_t		maxRayRecursionDepth;
	uint32_t		maxShaderGroupStride;
	uint32_t		shaderGroupBaseAlignment;
	uint32_t		shaderGroupHandleCaptureReplaySize;
	uint32_t		maxRayDispatchInvocationCount;
	uint32_t		shaderGroupHandleAlignment;
	uint32_t		maxRayHitAttributeSize;
};

struct VkStridedDeviceAddressRegionKHR
{
	VkDeviceAddress	deviceAddress;
	VkDeviceSize	stride;
	VkDeviceSize	size;
};

struct VkTraceRaysIndirectCommandKHR
{
	uint32_t	width;
	uint32_t	height;
	uint32_t	depth;
};

struct VkPhysicalDeviceRayQueryFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		rayQuery;
};

struct VkAndroidSurfaceCreateInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkAndroidSurfaceCreateFlagsKHR		flags;
	struct pt::AndroidNativeWindowPtr	window;
};

struct VkAndroidHardwareBufferUsageANDROID
{
	VkStructureType	sType;
	void*			pNext;
	uint64_t		androidHardwareBufferUsage;
};

struct VkAndroidHardwareBufferPropertiesANDROID
{
	VkStructureType	sType;
	void*			pNext;
	VkDeviceSize	allocationSize;
	uint32_t		memoryTypeBits;
};

struct VkAndroidHardwareBufferFormatPropertiesANDROID
{
	VkStructureType					sType;
	void*							pNext;
	VkFormat						format;
	uint64_t						externalFormat;
	VkFormatFeatureFlags			formatFeatures;
	VkComponentMapping				samplerYcbcrConversionComponents;
	VkSamplerYcbcrModelConversion	suggestedYcbcrModel;
	VkSamplerYcbcrRange				suggestedYcbcrRange;
	VkChromaLocation				suggestedXChromaOffset;
	VkChromaLocation				suggestedYChromaOffset;
};

struct VkImportAndroidHardwareBufferInfoANDROID
{
	VkStructureType						sType;
	const void*							pNext;
	struct pt::AndroidHardwareBufferPtr	buffer;
};

struct VkMemoryGetAndroidHardwareBufferInfoANDROID
{
	VkStructureType	sType;
	const void*		pNext;
	VkDeviceMemory	memory;
};

struct VkExternalFormatANDROID
{
	VkStructureType	sType;
	void*			pNext;
	uint64_t		externalFormat;
};

struct VkVideoQueueFamilyProperties2KHR
{
	VkStructureType					sType;
	void*							pNext;
	VkVideoCodecOperationFlagsKHR	videoCodecOperations;
};

struct VkVideoProfileKHR
{
	VkStructureType						sType;
	void*								pNext;
	VkVideoCodecOperationFlagBitsKHR	videoCodecOperation;
	VkVideoChromaSubsamplingFlagsKHR	chromaSubsampling;
	VkVideoComponentBitDepthFlagsKHR	lumaBitDepth;
	VkVideoComponentBitDepthFlagsKHR	chromaBitDepth;
};

struct VkVideoProfilesKHR
{
	VkStructureType				sType;
	void*						pNext;
	uint32_t					profileCount;
	const VkVideoProfileKHR*	pProfiles;
};

struct VkVideoCapabilitiesKHR
{
	VkStructureType				sType;
	void*						pNext;
	VkVideoCapabilitiesFlagsKHR	capabilityFlags;
	VkDeviceSize				minBitstreamBufferOffsetAlignment;
	VkDeviceSize				minBitstreamBufferSizeAlignment;
	VkExtent2D					videoPictureExtentGranularity;
	VkExtent2D					minExtent;
	VkExtent2D					maxExtent;
	uint32_t					maxReferencePicturesSlotsCount;
	uint32_t					maxReferencePicturesActiveCount;
};

struct VkPhysicalDeviceVideoFormatInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkImageUsageFlags			imageUsage;
	const VkVideoProfilesKHR*	pVideoProfiles;
};

struct VkVideoFormatPropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkFormat		format;
};

struct VkVideoPictureResourceKHR
{
	VkStructureType	sType;
	const void*		pNext;
	VkOffset2D		codedOffset;
	VkExtent2D		codedExtent;
	uint32_t		baseArrayLayer;
	VkImageView		imageViewBinding;
};

struct VkVideoReferenceSlotKHR
{
	VkStructureType						sType;
	const void*							pNext;
	int8_t								slotIndex;
	const VkVideoPictureResourceKHR*	pPictureResource;
};

struct VkVideoGetMemoryPropertiesKHR
{
	VkStructureType			sType;
	const void*				pNext;
	uint32_t				memoryBindIndex;
	VkMemoryRequirements2*	pMemoryRequirements;
};

struct VkVideoBindMemoryKHR
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		memoryBindIndex;
	VkDeviceMemory	memory;
	VkDeviceSize	memoryOffset;
	VkDeviceSize	memorySize;
};

struct VkVideoSessionCreateInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	uint32_t						queueFamilyIndex;
	VkVideoSessionCreateFlagsKHR	flags;
	const VkVideoProfileKHR*		pVideoProfile;
	VkFormat						pictureFormat;
	VkExtent2D						maxCodedExtent;
	VkFormat						referencePicturesFormat;
	uint32_t						maxReferencePicturesSlotsCount;
	uint32_t						maxReferencePicturesActiveCount;
};

struct VkVideoSessionParametersCreateInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkVideoSessionParametersKHR	videoSessionParametersTemplate;
	VkVideoSessionKHR			videoSession;
};

struct VkVideoSessionParametersUpdateInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		updateSequenceCount;
};

struct VkVideoBeginCodingInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkVideoBeginCodingFlagsKHR			flags;
	VkVideoCodingQualityPresetFlagsKHR	codecQualityPreset;
	VkVideoSessionKHR					videoSession;
	VkVideoSessionParametersKHR			videoSessionParameters;
	uint32_t							referenceSlotCount;
	const VkVideoReferenceSlotKHR*		pReferenceSlots;
};

struct VkVideoEndCodingInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkVideoEndCodingFlagsKHR	flags;
};

struct VkVideoCodingControlInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkVideoCodingControlFlagsKHR	flags;
};

struct VkVideoDecodeInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkVideoDecodeFlagsKHR			flags;
	VkOffset2D						codedOffset;
	VkExtent2D						codedExtent;
	VkBuffer						srcBuffer;
	VkDeviceSize					srcBufferOffset;
	VkDeviceSize					srcBufferRange;
	VkVideoPictureResourceKHR		dstPictureResource;
	const VkVideoReferenceSlotKHR*	pSetupReferenceSlot;
	uint32_t						referenceSlotCount;
	const VkVideoReferenceSlotKHR*	pReferenceSlots;
};

struct VkPhysicalDevicePortabilitySubsetFeaturesKHR
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		constantAlphaColorBlendFactors;
	VkBool32		events;
	VkBool32		imageViewFormatReinterpretation;
	VkBool32		imageViewFormatSwizzle;
	VkBool32		imageView2DOn3DImage;
	VkBool32		multisampleArrayImage;
	VkBool32		mutableComparisonSamplers;
	VkBool32		pointPolygons;
	VkBool32		samplerMipLodBias;
	VkBool32		separateStencilMaskRef;
	VkBool32		shaderSampleRateInterpolationFunctions;
	VkBool32		tessellationIsolines;
	VkBool32		tessellationPointMode;
	VkBool32		triangleFans;
	VkBool32		vertexAttributeAccessBeyondStride;
};

struct VkPhysicalDevicePortabilitySubsetPropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		minVertexInputBindingStrideAlignment;
};

struct VkVideoEncodeInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkVideoEncodeFlagsKHR			flags;
	uint32_t						qualityLevel;
	VkExtent2D						codedExtent;
	VkBuffer						dstBitstreamBuffer;
	VkDeviceSize					dstBitstreamBufferOffset;
	VkDeviceSize					dstBitstreamBufferMaxRange;
	VkVideoPictureResourceKHR		srcPictureResource;
	const VkVideoReferenceSlotKHR*	pSetupReferenceSlot;
	uint32_t						referenceSlotCount;
	const VkVideoReferenceSlotKHR*	pReferenceSlots;
};

struct VkVideoEncodeRateControlInfoKHR
{
	VkStructureType							sType;
	const void*								pNext;
	VkVideoEncodeRateControlFlagsKHR		flags;
	VkVideoEncodeRateControlModeFlagBitsKHR	rateControlMode;
	uint32_t								averageBitrate;
	uint16_t								peakToAverageBitrateRatio;
	uint16_t								frameRateNumerator;
	uint16_t								frameRateDenominator;
	uint32_t								virtualBufferSizeInMs;
};

struct StdVideoH264SpsVuiFlags
{
	uint32_t	aspect_ratio_info_present_flag:1;
	uint32_t	overscan_info_present_flag:1;
	uint32_t	overscan_appropriate_flag:1;
	uint32_t	video_signal_type_present_flag:1;
	uint32_t	video_full_range_flag:1;
	uint32_t	color_description_present_flag:1;
	uint32_t	chroma_loc_info_present_flag:1;
	uint32_t	timing_info_present_flag:1;
	uint32_t	fixed_frame_rate_flag:1;
	uint32_t	bitstream_restriction_flag:1;
	uint32_t	nal_hrd_parameters_present_flag:1;
	uint32_t	vcl_hrd_parameters_present_flag:1;
};

struct StdVideoH264HrdParameters
{
	uint8_t		cpb_cnt_minus1;
	uint8_t		bit_rate_scale;
	uint8_t		cpb_size_scale;
	uint32_t	bit_rate_value_minus1[32];
	uint32_t	cpb_size_value_minus1[32];
	uint8_t		cbr_flag[32];
	uint32_t	initial_cpb_removal_delay_length_minus1;
	uint32_t	cpb_removal_delay_length_minus1;
	uint32_t	dpb_output_delay_length_minus1;
	uint32_t	time_offset_length;
};

struct StdVideoH264SequenceParameterSetVui
{
	StdVideoH264AspectRatioIdc	aspect_ratio_idc;
	uint16_t					sar_width;
	uint16_t					sar_height;
	uint8_t						video_format;
	uint8_t						color_primaries;
	uint8_t						transfer_characteristics;
	uint8_t						matrix_coefficients;
	uint32_t					num_units_in_tick;
	uint32_t					time_scale;
	StdVideoH264HrdParameters	hrd_parameters;
	uint8_t						num_reorder_frames;
	uint8_t						max_dec_frame_buffering;
	StdVideoH264SpsVuiFlags		flags;
};

struct StdVideoH264SpsFlags
{
	uint32_t	constraint_set0_flag:1;
	uint32_t	constraint_set1_flag:1;
	uint32_t	constraint_set2_flag:1;
	uint32_t	constraint_set3_flag:1;
	uint32_t	constraint_set4_flag:1;
	uint32_t	constraint_set5_flag:1;
	uint32_t	direct_8x8_inference_flag:1;
	uint32_t	mb_adaptive_frame_field_flag:1;
	uint32_t	frame_mbs_only_flag:1;
	uint32_t	delta_pic_order_always_zero_flag:1;
	uint32_t	residual_colour_transform_flag:1;
	uint32_t	gaps_in_frame_num_value_allowed_flag:1;
	uint32_t	first_picture_after_seek_flag:1;
	uint32_t	qpprime_y_zero_transform_bypass_flag:1;
	uint32_t	frame_cropping_flag:1;
	uint32_t	scaling_matrix_present_flag:1;
	uint32_t	vui_parameters_present_flag:1;
};

struct StdVideoH264ScalingLists
{
	uint8_t	scaling_list_present_mask;
	uint8_t	use_default_scaling_matrix_mask;
	uint8_t	ScalingList4x4[6][16];
	uint8_t	ScalingList8x8[2][64];
};

struct StdVideoH264SequenceParameterSet
{
	StdVideoH264ProfileIdc					profile_idc;
	StdVideoH264Level						level_idc;
	uint8_t									seq_parameter_set_id;
	StdVideoH264ChromaFormatIdc				chroma_format_idc;
	uint8_t									bit_depth_luma_minus8;
	uint8_t									bit_depth_chroma_minus8;
	uint8_t									log2_max_frame_num_minus4;
	StdVideoH264PocType						pic_order_cnt_type;
	uint8_t									log2_max_pic_order_cnt_lsb_minus4;
	int32_t									offset_for_non_ref_pic;
	int32_t									offset_for_top_to_bottom_field;
	uint8_t									num_ref_frames_in_pic_order_cnt_cycle;
	uint8_t									max_num_ref_frames;
	uint32_t								pic_width_in_mbs_minus1;
	uint32_t								pic_height_in_map_units_minus1;
	uint32_t								frame_crop_left_offset;
	uint32_t								frame_crop_right_offset;
	uint32_t								frame_crop_top_offset;
	uint32_t								frame_crop_bottom_offset;
	StdVideoH264SpsFlags					flags;
	int32_t									offset_for_ref_frame[255];
	StdVideoH264ScalingLists*				pScalingLists;
	StdVideoH264SequenceParameterSetVui*	pSequenceParameterSetVui;
};

struct StdVideoH264PpsFlags
{
	uint32_t	transform_8x8_mode_flag:1;
	uint32_t	redundant_pic_cnt_present_flag:1;
	uint32_t	constrained_intra_pred_flag:1;
	uint32_t	deblocking_filter_control_present_flag:1;
	uint32_t	weighted_bipred_idc_flag:1;
	uint32_t	weighted_pred_flag:1;
	uint32_t	pic_order_present_flag:1;
	uint32_t	entropy_coding_mode_flag:1;
	uint32_t	scaling_matrix_present_flag:1;
};

struct StdVideoH264PictureParameterSet
{
	uint8_t							seq_parameter_set_id;
	uint8_t							pic_parameter_set_id;
	uint8_t							num_ref_idx_l0_default_active_minus1;
	uint8_t							num_ref_idx_l1_default_active_minus1;
	StdVideoH264WeightedBiPredIdc	weighted_bipred_idc;
	int8_t							pic_init_qp_minus26;
	int8_t							pic_init_qs_minus26;
	int8_t							chroma_qp_index_offset;
	int8_t							second_chroma_qp_index_offset;
	StdVideoH264PpsFlags			flags;
	StdVideoH264ScalingLists*		pScalingLists;
};

struct StdVideoEncodeH264SliceHeaderFlags
{
	uint32_t	idr_flag:1;
	uint32_t	is_reference_flag:1;
	uint32_t	num_ref_idx_active_override_flag:1;
	uint32_t	no_output_of_prior_pics_flag:1;
	uint32_t	long_term_reference_flag:1;
	uint32_t	adaptive_ref_pic_marking_mode_flag:1;
	uint32_t	no_prior_references_available_flag:1;
};

struct StdVideoEncodeH264PictureInfoFlags
{
	uint32_t	idr_flag:1;
	uint32_t	is_reference_flag:1;
	uint32_t	long_term_reference_flag:1;
};

struct StdVideoEncodeH264RefMgmtFlags
{
	uint32_t	ref_pic_list_modification_l0_flag:1;
	uint32_t	ref_pic_list_modification_l1_flag:1;
};

struct StdVideoEncodeH264RefListModEntry
{
	StdVideoH264ModificationOfPicNumsIdc	modification_of_pic_nums_idc;
	uint16_t								abs_diff_pic_num_minus1;
	uint16_t								long_term_pic_num;
};

struct StdVideoEncodeH264RefPicMarkingEntry
{
	StdVideoH264MemMgmtControlOp	operation;
	uint16_t						difference_of_pic_nums_minus1;
	uint16_t						long_term_pic_num;
	uint16_t						long_term_frame_idx;
	uint16_t						max_long_term_frame_idx_plus1;
};

struct StdVideoEncodeH264RefMemMgmtCtrlOperations
{
	StdVideoEncodeH264RefMgmtFlags			flags;
	uint8_t									refList0ModOpCount;
	StdVideoEncodeH264RefListModEntry*		pRefList0ModOperations;
	uint8_t									refList1ModOpCount;
	StdVideoEncodeH264RefListModEntry*		pRefList1ModOperations;
	uint8_t									refPicMarkingOpCount;
	StdVideoEncodeH264RefPicMarkingEntry*	pRefPicMarkingOperations;
};

struct StdVideoEncodeH264PictureInfo
{
	StdVideoEncodeH264PictureInfoFlags	flags;
	StdVideoH264PictureType				pictureType;
	uint32_t							frameNum;
	uint32_t							pictureOrderCount;
	uint16_t							long_term_pic_num;
	uint16_t							long_term_frame_idx;
};

struct StdVideoEncodeH264SliceHeader
{
	StdVideoEncodeH264SliceHeaderFlags			flags;
	StdVideoH264SliceType						slice_type;
	uint8_t										seq_parameter_set_id;
	uint8_t										pic_parameter_set_id;
	uint16_t									idr_pic_id;
	uint8_t										num_ref_idx_l0_active_minus1;
	uint8_t										num_ref_idx_l1_active_minus1;
	StdVideoH264CabacInitIdc					cabac_init_idc;
	StdVideoH264DisableDeblockingFilterIdc		disable_deblocking_filter_idc;
	int8_t										slice_alpha_c0_offset_div2;
	int8_t										slice_beta_offset_div2;
	StdVideoEncodeH264RefMemMgmtCtrlOperations*	pMemMgmtCtrlOperations;
};

struct VkVideoEncodeH264CapabilitiesEXT
{
	VkStructureType							sType;
	const void*								pNext;
	VkVideoEncodeH264CapabilitiesFlagsEXT	flags;
	VkVideoEncodeH264InputModeFlagsEXT		inputModeFlags;
	VkVideoEncodeH264OutputModeFlagsEXT		outputModeFlags;
	VkExtent2D								minPictureSizeInMbs;
	VkExtent2D								maxPictureSizeInMbs;
	VkExtent2D								inputImageDataAlignment;
	uint8_t									maxNumL0ReferenceForP;
	uint8_t									maxNumL0ReferenceForB;
	uint8_t									maxNumL1Reference;
	uint8_t									qualityLevelCount;
	VkExtensionProperties					stdExtensionVersion;
};

struct VkVideoEncodeH264SessionCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkVideoEncodeH264CreateFlagsEXT	flags;
	VkExtent2D						maxPictureSizeInMbs;
	const VkExtensionProperties*	pStdExtensionVersion;
};

struct VkVideoEncodeH264SessionParametersAddInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								spsStdCount;
	const StdVideoH264SequenceParameterSet*	pSpsStd;
	uint32_t								ppsStdCount;
	const StdVideoH264PictureParameterSet*	pPpsStd;
};

struct VkVideoEncodeH264SessionParametersCreateInfoEXT
{
	VkStructureType										sType;
	const void*											pNext;
	uint32_t											maxSpsStdCount;
	uint32_t											maxPpsStdCount;
	const VkVideoEncodeH264SessionParametersAddInfoEXT*	pParametersAddInfo;
};

struct VkVideoEncodeH264DpbSlotInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	int8_t									slotIndex;
	const StdVideoEncodeH264PictureInfo*	pStdPictureInfo;
};

struct VkVideoEncodeH264NaluSliceEXT
{
	VkStructureType							sType;
	const void*								pNext;
	const StdVideoEncodeH264SliceHeader*	pSliceHeaderStd;
	uint32_t								mbCount;
	uint8_t									refFinalList0EntryCount;
	const VkVideoEncodeH264DpbSlotInfoEXT*	pRefFinalList0Entries;
	uint8_t									refFinalList1EntryCount;
	const VkVideoEncodeH264DpbSlotInfoEXT*	pRefFinalList1Entries;
	uint32_t								precedingNaluBytes;
	uint8_t									minQp;
	uint8_t									maxQp;
};

struct VkVideoEncodeH264VclFrameInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	uint8_t									refDefaultFinalList0EntryCount;
	const VkVideoEncodeH264DpbSlotInfoEXT*	pRefDefaultFinalList0Entries;
	uint8_t									refDefaultFinalList1EntryCount;
	const VkVideoEncodeH264DpbSlotInfoEXT*	pRefDefaultFinalList1Entries;
	uint32_t								naluSliceEntryCount;
	const VkVideoEncodeH264NaluSliceEXT*	pNaluSliceEntries;
	const VkVideoEncodeH264DpbSlotInfoEXT*	pCurrentPictureInfo;
};

struct VkVideoEncodeH264EmitPictureParametersEXT
{
	VkStructureType	sType;
	const void*		pNext;
	uint8_t			spsId;
	VkBool32		emitSpsEnable;
	uint32_t		ppsIdEntryCount;
	const uint8_t*	ppsIdEntries;
};

struct VkVideoEncodeH264ProfileEXT
{
	VkStructureType			sType;
	const void*				pNext;
	StdVideoH264ProfileIdc	stdProfileIdc;
};

struct StdVideoDecodeH264PictureInfoFlags
{
	uint32_t	field_pic_flag:1;
	uint32_t	is_intra:1;
	uint32_t	bottom_field_flag:1;
	uint32_t	is_reference:1;
	uint32_t	complementary_field_pair:1;
};

struct StdVideoDecodeH264PictureInfo
{
	uint8_t								seq_parameter_set_id;
	uint8_t								pic_parameter_set_id;
	uint16_t							reserved;
	uint16_t							frame_num;
	uint16_t							idr_pic_id;
	int32_t								PicOrderCnt[2];
	StdVideoDecodeH264PictureInfoFlags	flags;
};

struct StdVideoDecodeH264ReferenceInfoFlags
{
	uint32_t	top_field_flag:1;
	uint32_t	bottom_field_flag:1;
	uint32_t	is_long_term:1;
	uint32_t	is_non_existing:1;
};

struct StdVideoDecodeH264ReferenceInfo
{
	uint16_t								FrameNum;
	uint16_t								reserved;
	int32_t									PicOrderCnt[2];
	StdVideoDecodeH264ReferenceInfoFlags	flags;
};

struct StdVideoDecodeH264MvcElementFlags
{
	uint32_t	non_idr:1;
	uint32_t	anchor_pic:1;
	uint32_t	inter_view:1;
};

struct StdVideoDecodeH264MvcElement
{
	StdVideoDecodeH264MvcElementFlags	flags;
	uint16_t							viewOrderIndex;
	uint16_t							viewId;
	uint16_t							temporalId;
	uint16_t							priorityId;
	uint16_t							numOfAnchorRefsInL0;
	uint16_t							viewIdOfAnchorRefsInL0[15];
	uint16_t							numOfAnchorRefsInL1;
	uint16_t							viewIdOfAnchorRefsInL1[15];
	uint16_t							numOfNonAnchorRefsInL0;
	uint16_t							viewIdOfNonAnchorRefsInL0[15];
	uint16_t							numOfNonAnchorRefsInL1;
	uint16_t							viewIdOfNonAnchorRefsInL1[15];
};

struct StdVideoDecodeH264Mvc
{
	uint32_t						viewId0;
	uint32_t						mvcElementCount;
	StdVideoDecodeH264MvcElement*	pMvcElements;
};

struct VkVideoDecodeH264ProfileEXT
{
	VkStructureType							sType;
	const void*								pNext;
	StdVideoH264ProfileIdc					stdProfileIdc;
	VkVideoDecodeH264FieldLayoutFlagsEXT	fieldLayout;
};

struct VkVideoDecodeH264CapabilitiesEXT
{
	VkStructureType			sType;
	void*					pNext;
	uint32_t				maxLevel;
	VkOffset2D				fieldOffsetGranularity;
	VkExtensionProperties	stdExtensionVersion;
};

struct VkVideoDecodeH264SessionCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkVideoDecodeH264CreateFlagsEXT	flags;
	const VkExtensionProperties*	pStdExtensionVersion;
};

struct VkVideoDecodeH264SessionParametersAddInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								spsStdCount;
	const StdVideoH264SequenceParameterSet*	pSpsStd;
	uint32_t								ppsStdCount;
	const StdVideoH264PictureParameterSet*	pPpsStd;
};

struct VkVideoDecodeH264SessionParametersCreateInfoEXT
{
	VkStructureType										sType;
	const void*											pNext;
	uint32_t											maxSpsStdCount;
	uint32_t											maxPpsStdCount;
	const VkVideoDecodeH264SessionParametersAddInfoEXT*	pParametersAddInfo;
};

struct VkVideoDecodeH264PictureInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	const StdVideoDecodeH264PictureInfo*	pStdPictureInfo;
	uint32_t								slicesCount;
	const uint32_t*							pSlicesDataOffsets;
};

struct VkVideoDecodeH264MvcEXT
{
	VkStructureType					sType;
	const void*						pNext;
	const StdVideoDecodeH264Mvc*	pStdMvc;
};

struct VkVideoDecodeH264DpbSlotInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	const StdVideoDecodeH264ReferenceInfo*	pStdReferenceInfo;
};

struct StdVideoH265DecPicBufMgr
{
	uint32_t	max_latency_increase_plus1[7];
	uint8_t		max_dec_pic_buffering_minus1[7];
	uint8_t		max_num_reorder_pics[7];
};

struct StdVideoH265SubLayerHrdParameters
{
	uint32_t	bit_rate_value_minus1[32];
	uint32_t	cpb_size_value_minus1[32];
	uint32_t	cpb_size_du_value_minus1[32];
	uint32_t	bit_rate_du_value_minus1[32];
	uint32_t	cbr_flag;
};

struct StdVideoH265HrdFlags
{
	uint32_t	nal_hrd_parameters_present_flag:1;
	uint32_t	vcl_hrd_parameters_present_flag:1;
	uint32_t	sub_pic_hrd_params_present_flag:1;
	uint32_t	sub_pic_cpb_params_in_pic_timing_sei_flag:1;
	uint8_t		fixed_pic_rate_general_flag;
	uint8_t		fixed_pic_rate_within_cvs_flag;
	uint8_t		low_delay_hrd_flag;
};

struct StdVideoH265HrdParameters
{
	uint8_t								tick_divisor_minus2;
	uint8_t								du_cpb_removal_delay_increment_length_minus1;
	uint8_t								dpb_output_delay_du_length_minus1;
	uint8_t								bit_rate_scale;
	uint8_t								cpb_size_scale;
	uint8_t								cpb_size_du_scale;
	uint8_t								initial_cpb_removal_delay_length_minus1;
	uint8_t								au_cpb_removal_delay_length_minus1;
	uint8_t								dpb_output_delay_length_minus1;
	uint8_t								cpb_cnt_minus1[7];
	uint16_t							elemental_duration_in_tc_minus1[7];
	StdVideoH265SubLayerHrdParameters*	SubLayerHrdParametersNal[7];
	StdVideoH265SubLayerHrdParameters*	SubLayerHrdParametersVcl[7];
	StdVideoH265HrdFlags				flags;
};

struct StdVideoH265VpsFlags
{
	uint32_t	vps_temporal_id_nesting_flag:1;
	uint32_t	vps_sub_layer_ordering_info_present_flag:1;
	uint32_t	vps_timing_info_present_flag:1;
	uint32_t	vps_poc_proportional_to_timing_flag:1;
};

struct StdVideoH265VideoParameterSet
{
	uint8_t						vps_video_parameter_set_id;
	uint8_t						vps_max_sub_layers_minus1;
	uint32_t					vps_num_units_in_tick;
	uint32_t					vps_time_scale;
	uint32_t					vps_num_ticks_poc_diff_one_minus1;
	StdVideoH265DecPicBufMgr*	pDecPicBufMgr;
	StdVideoH265HrdParameters*	hrd_parameters;
	StdVideoH265VpsFlags		flags;
};

struct StdVideoH265ScalingLists
{
	uint8_t	ScalingList4x4[6][16];
	uint8_t	ScalingList8x8[6][64];
	uint8_t	ScalingList16x16[6][64];
	uint8_t	ScalingList32x32[2][64];
	uint8_t	ScalingListDCCoef16x16[6];
	uint8_t	ScalingListDCCoef32x32[2];
};

struct StdVideoH265SpsVuiFlags
{
	uint32_t	aspect_ratio_info_present_flag:1;
	uint32_t	overscan_info_present_flag:1;
	uint32_t	overscan_appropriate_flag:1;
	uint32_t	video_signal_type_present_flag:1;
	uint32_t	video_full_range_flag:1;
	uint32_t	colour_description_present_flag:1;
	uint32_t	chroma_loc_info_present_flag:1;
	uint32_t	neutral_chroma_indication_flag:1;
	uint32_t	field_seq_flag:1;
	uint32_t	frame_field_info_present_flag:1;
	uint32_t	default_display_window_flag:1;
	uint32_t	vui_timing_info_present_flag:1;
	uint32_t	vui_poc_proportional_to_timing_flag:1;
	uint32_t	vui_hrd_parameters_present_flag:1;
	uint32_t	bitstream_restriction_flag:1;
	uint32_t	tiles_fixed_structure_flag:1;
	uint32_t	motion_vectors_over_pic_boundaries_flag:1;
	uint32_t	restricted_ref_pic_lists_flag:1;
};

struct StdVideoH265SequenceParameterSetVui
{
	uint8_t						aspect_ratio_idc;
	uint16_t					sar_width;
	uint16_t					sar_height;
	uint8_t						video_format;
	uint8_t						colour_primaries;
	uint8_t						transfer_characteristics;
	uint8_t						matrix_coeffs;
	uint8_t						chroma_sample_loc_type_top_field;
	uint8_t						chroma_sample_loc_type_bottom_field;
	uint16_t					def_disp_win_left_offset;
	uint16_t					def_disp_win_right_offset;
	uint16_t					def_disp_win_top_offset;
	uint16_t					def_disp_win_bottom_offset;
	uint32_t					vui_num_units_in_tick;
	uint32_t					vui_time_scale;
	uint32_t					vui_num_ticks_poc_diff_one_minus1;
	StdVideoH265HrdParameters*	hrd_parameters;
	uint16_t					min_spatial_segmentation_idc;
	uint8_t						max_bytes_per_pic_denom;
	uint8_t						max_bits_per_min_cu_denom;
	uint8_t						log2_max_mv_length_horizontal;
	uint8_t						log2_max_mv_length_vertical;
	StdVideoH265SpsVuiFlags		flags;
};

struct StdVideoH265PredictorPaletteEntries
{
	uint16_t	PredictorPaletteEntries[3][128];
};

struct StdVideoH265SpsFlags
{
	uint32_t	sps_temporal_id_nesting_flag:1;
	uint32_t	separate_colour_plane_flag:1;
	uint32_t	scaling_list_enabled_flag:1;
	uint32_t	sps_scaling_list_data_present_flag:1;
	uint32_t	amp_enabled_flag:1;
	uint32_t	sample_adaptive_offset_enabled_flag:1;
	uint32_t	pcm_enabled_flag:1;
	uint32_t	pcm_loop_filter_disabled_flag:1;
	uint32_t	long_term_ref_pics_present_flag:1;
	uint32_t	sps_temporal_mvp_enabled_flag:1;
	uint32_t	strong_intra_smoothing_enabled_flag:1;
	uint32_t	vui_parameters_present_flag:1;
	uint32_t	sps_extension_present_flag:1;
	uint32_t	sps_range_extension_flag:1;
	uint32_t	transform_skip_rotation_enabled_flag:1;
	uint32_t	transform_skip_context_enabled_flag:1;
	uint32_t	implicit_rdpcm_enabled_flag:1;
	uint32_t	explicit_rdpcm_enabled_flag:1;
	uint32_t	extended_precision_processing_flag:1;
	uint32_t	intra_smoothing_disabled_flag:1;
	uint32_t	high_precision_offsets_enabled_flag:1;
	uint32_t	persistent_rice_adaptation_enabled_flag:1;
	uint32_t	cabac_bypass_alignment_enabled_flag:1;
	uint32_t	sps_curr_pic_ref_enabled_flag:1;
	uint32_t	palette_mode_enabled_flag:1;
	uint32_t	sps_palette_predictor_initializer_present_flag:1;
	uint32_t	intra_boundary_filtering_disabled_flag:1;
};

struct StdVideoH265SequenceParameterSet
{
	StdVideoH265ProfileIdc					profile_idc;
	StdVideoH265Level						level_idc;
	uint32_t								pic_width_in_luma_samples;
	uint32_t								pic_height_in_luma_samples;
	uint8_t									sps_video_parameter_set_id;
	uint8_t									sps_max_sub_layers_minus1;
	uint8_t									sps_seq_parameter_set_id;
	uint8_t									chroma_format_idc;
	uint8_t									bit_depth_luma_minus8;
	uint8_t									bit_depth_chroma_minus8;
	uint8_t									log2_max_pic_order_cnt_lsb_minus4;
	uint8_t									sps_max_dec_pic_buffering_minus1;
	uint8_t									log2_min_luma_coding_block_size_minus3;
	uint8_t									log2_diff_max_min_luma_coding_block_size;
	uint8_t									log2_min_luma_transform_block_size_minus2;
	uint8_t									log2_diff_max_min_luma_transform_block_size;
	uint8_t									max_transform_hierarchy_depth_inter;
	uint8_t									max_transform_hierarchy_depth_intra;
	uint8_t									num_short_term_ref_pic_sets;
	uint8_t									num_long_term_ref_pics_sps;
	uint8_t									pcm_sample_bit_depth_luma_minus1;
	uint8_t									pcm_sample_bit_depth_chroma_minus1;
	uint8_t									log2_min_pcm_luma_coding_block_size_minus3;
	uint8_t									log2_diff_max_min_pcm_luma_coding_block_size;
	uint32_t								conf_win_left_offset;
	uint32_t								conf_win_right_offset;
	uint32_t								conf_win_top_offset;
	uint32_t								conf_win_bottom_offset;
	StdVideoH265DecPicBufMgr*				pDecPicBufMgr;
	StdVideoH265SpsFlags					flags;
	StdVideoH265ScalingLists*				pScalingLists;
	StdVideoH265SequenceParameterSetVui*	pSequenceParameterSetVui;
	uint8_t									palette_max_size;
	uint8_t									delta_palette_max_predictor_size;
	uint8_t									motion_vector_resolution_control_idc;
	uint8_t									sps_num_palette_predictor_initializer_minus1;
	StdVideoH265PredictorPaletteEntries*	pPredictorPaletteEntries;
};

struct StdVideoH265PpsFlags
{
	uint32_t	dependent_slice_segments_enabled_flag:1;
	uint32_t	output_flag_present_flag:1;
	uint32_t	sign_data_hiding_enabled_flag:1;
	uint32_t	cabac_init_present_flag:1;
	uint32_t	constrained_intra_pred_flag:1;
	uint32_t	transform_skip_enabled_flag:1;
	uint32_t	cu_qp_delta_enabled_flag:1;
	uint32_t	pps_slice_chroma_qp_offsets_present_flag:1;
	uint32_t	weighted_pred_flag:1;
	uint32_t	weighted_bipred_flag:1;
	uint32_t	transquant_bypass_enabled_flag:1;
	uint32_t	tiles_enabled_flag:1;
	uint32_t	entropy_coding_sync_enabled_flag:1;
	uint32_t	uniform_spacing_flag:1;
	uint32_t	loop_filter_across_tiles_enabled_flag:1;
	uint32_t	pps_loop_filter_across_slices_enabled_flag:1;
	uint32_t	deblocking_filter_control_present_flag:1;
	uint32_t	deblocking_filter_override_enabled_flag:1;
	uint32_t	pps_deblocking_filter_disabled_flag:1;
	uint32_t	pps_scaling_list_data_present_flag:1;
	uint32_t	lists_modification_present_flag:1;
	uint32_t	slice_segment_header_extension_present_flag:1;
	uint32_t	pps_extension_present_flag:1;
	uint32_t	cross_component_prediction_enabled_flag:1;
	uint32_t	chroma_qp_offset_list_enabled_flag:1;
	uint32_t	pps_curr_pic_ref_enabled_flag:1;
	uint32_t	residual_adaptive_colour_transform_enabled_flag:1;
	uint32_t	pps_slice_act_qp_offsets_present_flag:1;
	uint32_t	pps_palette_predictor_initializer_present_flag:1;
	uint32_t	monochrome_palette_flag:1;
	uint32_t	pps_range_extension_flag:1;
};

struct StdVideoH265PictureParameterSet
{
	uint8_t									pps_pic_parameter_set_id;
	uint8_t									pps_seq_parameter_set_id;
	uint8_t									num_extra_slice_header_bits;
	uint8_t									num_ref_idx_l0_default_active_minus1;
	uint8_t									num_ref_idx_l1_default_active_minus1;
	int8_t									init_qp_minus26;
	uint8_t									diff_cu_qp_delta_depth;
	int8_t									pps_cb_qp_offset;
	int8_t									pps_cr_qp_offset;
	uint8_t									num_tile_columns_minus1;
	uint8_t									num_tile_rows_minus1;
	uint16_t								column_width_minus1[19];
	uint16_t								row_height_minus1[21];
	int8_t									pps_beta_offset_div2;
	int8_t									pps_tc_offset_div2;
	uint8_t									log2_parallel_merge_level_minus2;
	StdVideoH265PpsFlags					flags;
	StdVideoH265ScalingLists*				pScalingLists;
	uint8_t									log2_max_transform_skip_block_size_minus2;
	uint8_t									diff_cu_chroma_qp_offset_depth;
	uint8_t									chroma_qp_offset_list_len_minus1;
	int8_t									cb_qp_offset_list[6];
	int8_t									cr_qp_offset_list[6];
	uint8_t									log2_sao_offset_scale_luma;
	uint8_t									log2_sao_offset_scale_chroma;
	int8_t									pps_act_y_qp_offset_plus5;
	int8_t									pps_act_cb_qp_offset_plus5;
	int8_t									pps_act_cr_qp_offset_plus5;
	uint8_t									pps_num_palette_predictor_initializer;
	uint8_t									luma_bit_depth_entry_minus8;
	uint8_t									chroma_bit_depth_entry_minus8;
	StdVideoH265PredictorPaletteEntries*	pPredictorPaletteEntries;
};

struct StdVideoDecodeH265PictureInfoFlags
{
	uint32_t	IrapPicFlag:1;
	uint32_t	IdrPicFlag:1;
	uint32_t	IsReference:1;
	uint32_t	short_term_ref_pic_set_sps_flag:1;
};

struct StdVideoDecodeH265PictureInfo
{
	uint8_t								vps_video_parameter_set_id;
	uint8_t								sps_seq_parameter_set_id;
	uint8_t								pps_pic_parameter_set_id;
	uint8_t								num_short_term_ref_pic_sets;
	int32_t								PicOrderCntVal;
	uint16_t							NumBitsForSTRefPicSetInSlice;
	uint8_t								NumDeltaPocsOfRefRpsIdx;
	uint8_t								RefPicSetStCurrBefore[8];
	uint8_t								RefPicSetStCurrAfter[8];
	uint8_t								RefPicSetLtCurr[8];
	StdVideoDecodeH265PictureInfoFlags	flags;
};

struct StdVideoDecodeH265ReferenceInfoFlags
{
	uint32_t	is_long_term:1;
	uint32_t	is_non_existing:1;
};

struct StdVideoDecodeH265ReferenceInfo
{
	int32_t									PicOrderCntVal;
	StdVideoDecodeH265ReferenceInfoFlags	flags;
};

struct VkVideoDecodeH265ProfileEXT
{
	VkStructureType			sType;
	const void*				pNext;
	StdVideoH265ProfileIdc	stdProfileIdc;
};

struct VkVideoDecodeH265CapabilitiesEXT
{
	VkStructureType			sType;
	void*					pNext;
	uint32_t				maxLevel;
	VkExtensionProperties	stdExtensionVersion;
};

struct VkVideoDecodeH265SessionCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkVideoDecodeH265CreateFlagsEXT	flags;
	const VkExtensionProperties*	pStdExtensionVersion;
};

struct VkVideoDecodeH265SessionParametersAddInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	uint32_t								spsStdCount;
	const StdVideoH265SequenceParameterSet*	pSpsStd;
	uint32_t								ppsStdCount;
	const StdVideoH265PictureParameterSet*	pPpsStd;
};

struct VkVideoDecodeH265SessionParametersCreateInfoEXT
{
	VkStructureType										sType;
	const void*											pNext;
	uint32_t											maxSpsStdCount;
	uint32_t											maxPpsStdCount;
	const VkVideoDecodeH265SessionParametersAddInfoEXT*	pParametersAddInfo;
};

struct VkVideoDecodeH265PictureInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	StdVideoDecodeH265PictureInfo*	pStdPictureInfo;
	uint32_t						slicesCount;
	const uint32_t*					pSlicesDataOffsets;
};

struct VkVideoDecodeH265DpbSlotInfoEXT
{
	VkStructureType							sType;
	const void*								pNext;
	const StdVideoDecodeH265ReferenceInfo*	pStdReferenceInfo;
};

struct VkImagePipeSurfaceCreateInfoFUCHSIA
{
	VkStructureType							sType;
	const void*								pNext;
	VkImagePipeSurfaceCreateFlagsFUCHSIA	flags;
	pt::zx_handle_t							imagePipeHandle;
};

struct VkImportMemoryZirconHandleInfoFUCHSIA
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
	pt::zx_handle_t						handle;
};

struct VkMemoryZirconHandlePropertiesFUCHSIA
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		memoryTypeBits;
};

struct VkMemoryGetZirconHandleInfoFUCHSIA
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceMemory						memory;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

struct VkImportSemaphoreZirconHandleInfoFUCHSIA
{
	VkStructureType							sType;
	const void*								pNext;
	VkSemaphore								semaphore;
	VkSemaphoreImportFlags					flags;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
	pt::zx_handle_t							zirconHandle;
};

struct VkSemaphoreGetZirconHandleInfoFUCHSIA
{
	VkStructureType							sType;
	const void*								pNext;
	VkSemaphore								semaphore;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
};

struct VkStreamDescriptorSurfaceCreateInfoGGP
{
	VkStructureType							sType;
	const void*								pNext;
	VkStreamDescriptorSurfaceCreateFlagsGGP	flags;
	pt::GgpStreamDescriptor					streamDescriptor;
};

struct VkPresentFrameTokenGGP
{
	VkStructureType		sType;
	const void*			pNext;
	pt::GgpFrameToken	frameToken;
};

struct VkIOSSurfaceCreateInfoMVK
{
	VkStructureType				sType;
	const void*					pNext;
	VkIOSSurfaceCreateFlagsMVK	flags;
	const void*					pView;
};

struct VkMacOSSurfaceCreateInfoMVK
{
	VkStructureType					sType;
	const void*						pNext;
	VkMacOSSurfaceCreateFlagsMVK	flags;
	const void*						pView;
};

struct VkMetalSurfaceCreateInfoEXT
{
	VkStructureType					sType;
	const void*						pNext;
	VkMetalSurfaceCreateFlagsEXT	flags;
	const pt::CAMetalLayer*			pLayer;
};

struct VkViSurfaceCreateInfoNN
{
	VkStructureType				sType;
	const void*					pNext;
	VkViSurfaceCreateFlagsNN	flags;
	void*						window;
};

struct VkWaylandSurfaceCreateInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkWaylandSurfaceCreateFlagsKHR	flags;
	pt::WaylandDisplayPtr			display;
	pt::WaylandSurfacePtr			surface;
};

struct VkWin32SurfaceCreateInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	VkWin32SurfaceCreateFlagsKHR	flags;
	pt::Win32InstanceHandle			hinstance;
	pt::Win32WindowHandle			hwnd;
};

struct VkImportMemoryWin32HandleInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagBits	handleType;
	pt::Win32Handle						handle;
	pt::Win32LPCWSTR					name;
};

struct VkExportMemoryWin32HandleInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	pt::Win32SecurityAttributesPtr	pAttributes;
	uint32_t						dwAccess;
	pt::Win32LPCWSTR				name;
};

struct VkMemoryWin32HandlePropertiesKHR
{
	VkStructureType	sType;
	void*			pNext;
	uint32_t		memoryTypeBits;
};

struct VkMemoryGetWin32HandleInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkDeviceMemory						memory;
	VkExternalMemoryHandleTypeFlagBits	handleType;
};

struct VkWin32KeyedMutexAcquireReleaseInfoKHR
{
	VkStructureType			sType;
	const void*				pNext;
	uint32_t				acquireCount;
	const VkDeviceMemory*	pAcquireSyncs;
	const uint64_t*			pAcquireKeys;
	const uint32_t*			pAcquireTimeouts;
	uint32_t				releaseCount;
	const VkDeviceMemory*	pReleaseSyncs;
	const uint64_t*			pReleaseKeys;
};

struct VkImportSemaphoreWin32HandleInfoKHR
{
	VkStructureType							sType;
	const void*								pNext;
	VkSemaphore								semaphore;
	VkSemaphoreImportFlags					flags;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
	pt::Win32Handle							handle;
	pt::Win32LPCWSTR						name;
};

struct VkExportSemaphoreWin32HandleInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	pt::Win32SecurityAttributesPtr	pAttributes;
	uint32_t						dwAccess;
	pt::Win32LPCWSTR				name;
};

struct VkD3D12FenceSubmitInfoKHR
{
	VkStructureType	sType;
	const void*		pNext;
	uint32_t		waitSemaphoreValuesCount;
	const uint64_t*	pWaitSemaphoreValues;
	uint32_t		signalSemaphoreValuesCount;
	const uint64_t*	pSignalSemaphoreValues;
};

struct VkSemaphoreGetWin32HandleInfoKHR
{
	VkStructureType							sType;
	const void*								pNext;
	VkSemaphore								semaphore;
	VkExternalSemaphoreHandleTypeFlagBits	handleType;
};

struct VkImportFenceWin32HandleInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkFence								fence;
	VkFenceImportFlags					flags;
	VkExternalFenceHandleTypeFlagBits	handleType;
	pt::Win32Handle						handle;
	pt::Win32LPCWSTR					name;
};

struct VkExportFenceWin32HandleInfoKHR
{
	VkStructureType					sType;
	const void*						pNext;
	pt::Win32SecurityAttributesPtr	pAttributes;
	uint32_t						dwAccess;
	pt::Win32LPCWSTR				name;
};

struct VkFenceGetWin32HandleInfoKHR
{
	VkStructureType						sType;
	const void*							pNext;
	VkFence								fence;
	VkExternalFenceHandleTypeFlagBits	handleType;
};

struct VkImportMemoryWin32HandleInfoNV
{
	VkStructureType						sType;
	const void*							pNext;
	VkExternalMemoryHandleTypeFlagsNV	handleType;
	pt::Win32Handle						handle;
};

struct VkExportMemoryWin32HandleInfoNV
{
	VkStructureType					sType;
	const void*						pNext;
	pt::Win32SecurityAttributesPtr	pAttributes;
	uint32_t						dwAccess;
};

struct VkWin32KeyedMutexAcquireReleaseInfoNV
{
	VkStructureType			sType;
	const void*				pNext;
	uint32_t				acquireCount;
	const VkDeviceMemory*	pAcquireSyncs;
	const uint64_t*			pAcquireKeys;
	const uint32_t*			pAcquireTimeoutMilliseconds;
	uint32_t				releaseCount;
	const VkDeviceMemory*	pReleaseSyncs;
	const uint64_t*			pReleaseKeys;
};

struct VkSurfaceFullScreenExclusiveInfoEXT
{
	VkStructureType				sType;
	void*						pNext;
	VkFullScreenExclusiveEXT	fullScreenExclusive;
};

struct VkSurfaceCapabilitiesFullScreenExclusiveEXT
{
	VkStructureType	sType;
	void*			pNext;
	VkBool32		fullScreenExclusiveSupported;
};

struct VkSurfaceFullScreenExclusiveWin32InfoEXT
{
	VkStructureType			sType;
	const void*				pNext;
	pt::Win32MonitorHandle	hmonitor;
};

struct VkXcbSurfaceCreateInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkXcbSurfaceCreateFlagsKHR	flags;
	pt::XcbConnectionPtr		connection;
	pt::XcbWindow				window;
};

struct VkXlibSurfaceCreateInfoKHR
{
	VkStructureType				sType;
	const void*					pNext;
	VkXlibSurfaceCreateFlagsKHR	flags;
	pt::XlibDisplayPtr			dpy;
	pt::XlibWindow				window;
};

typedef VkBindBufferMemoryInfo VkBindBufferMemoryInfoKHR;

typedef VkBindImageMemoryInfo VkBindImageMemoryInfoKHR;

typedef VkPhysicalDevice16BitStorageFeatures VkPhysicalDevice16BitStorageFeaturesKHR;

typedef VkMemoryDedicatedRequirements VkMemoryDedicatedRequirementsKHR;

typedef VkMemoryDedicatedAllocateInfo VkMemoryDedicatedAllocateInfoKHR;

typedef VkMemoryAllocateFlagsInfo VkMemoryAllocateFlagsInfoKHR;

typedef VkDeviceGroupRenderPassBeginInfo VkDeviceGroupRenderPassBeginInfoKHR;

typedef VkDeviceGroupCommandBufferBeginInfo VkDeviceGroupCommandBufferBeginInfoKHR;

typedef VkDeviceGroupSubmitInfo VkDeviceGroupSubmitInfoKHR;

typedef VkDeviceGroupBindSparseInfo VkDeviceGroupBindSparseInfoKHR;

typedef VkBindBufferMemoryDeviceGroupInfo VkBindBufferMemoryDeviceGroupInfoKHR;

typedef VkBindImageMemoryDeviceGroupInfo VkBindImageMemoryDeviceGroupInfoKHR;

typedef VkPhysicalDeviceGroupProperties VkPhysicalDeviceGroupPropertiesKHR;

typedef VkDeviceGroupDeviceCreateInfo VkDeviceGroupDeviceCreateInfoKHR;

typedef VkBufferMemoryRequirementsInfo2 VkBufferMemoryRequirementsInfo2KHR;

typedef VkImageMemoryRequirementsInfo2 VkImageMemoryRequirementsInfo2KHR;

typedef VkImageSparseMemoryRequirementsInfo2 VkImageSparseMemoryRequirementsInfo2KHR;

typedef VkMemoryRequirements2 VkMemoryRequirements2KHR;

typedef VkSparseImageMemoryRequirements2 VkSparseImageMemoryRequirements2KHR;

typedef VkPhysicalDeviceFeatures2 VkPhysicalDeviceFeatures2KHR;

typedef VkPhysicalDeviceProperties2 VkPhysicalDeviceProperties2KHR;

typedef VkFormatProperties2 VkFormatProperties2KHR;

typedef VkImageFormatProperties2 VkImageFormatProperties2KHR;

typedef VkPhysicalDeviceImageFormatInfo2 VkPhysicalDeviceImageFormatInfo2KHR;

typedef VkQueueFamilyProperties2 VkQueueFamilyProperties2KHR;

typedef VkPhysicalDeviceMemoryProperties2 VkPhysicalDeviceMemoryProperties2KHR;

typedef VkSparseImageFormatProperties2 VkSparseImageFormatProperties2KHR;

typedef VkPhysicalDeviceSparseImageFormatInfo2 VkPhysicalDeviceSparseImageFormatInfo2KHR;

typedef VkPhysicalDevicePointClippingProperties VkPhysicalDevicePointClippingPropertiesKHR;

typedef VkInputAttachmentAspectReference VkInputAttachmentAspectReferenceKHR;

typedef VkRenderPassInputAttachmentAspectCreateInfo VkRenderPassInputAttachmentAspectCreateInfoKHR;

typedef VkImageViewUsageCreateInfo VkImageViewUsageCreateInfoKHR;

typedef VkPipelineTessellationDomainOriginStateCreateInfo VkPipelineTessellationDomainOriginStateCreateInfoKHR;

typedef VkRenderPassMultiviewCreateInfo VkRenderPassMultiviewCreateInfoKHR;

typedef VkPhysicalDeviceMultiviewFeatures VkPhysicalDeviceMultiviewFeaturesKHR;

typedef VkPhysicalDeviceMultiviewProperties VkPhysicalDeviceMultiviewPropertiesKHR;

typedef VkSamplerYcbcrConversionCreateInfo VkSamplerYcbcrConversionCreateInfoKHR;

typedef VkSamplerYcbcrConversionInfo VkSamplerYcbcrConversionInfoKHR;

typedef VkBindImagePlaneMemoryInfo VkBindImagePlaneMemoryInfoKHR;

typedef VkImagePlaneMemoryRequirementsInfo VkImagePlaneMemoryRequirementsInfoKHR;

typedef VkPhysicalDeviceSamplerYcbcrConversionFeatures VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR;

typedef VkSamplerYcbcrConversionImageFormatProperties VkSamplerYcbcrConversionImageFormatPropertiesKHR;

typedef VkDescriptorUpdateTemplateEntry VkDescriptorUpdateTemplateEntryKHR;

typedef VkDescriptorUpdateTemplateCreateInfo VkDescriptorUpdateTemplateCreateInfoKHR;

typedef VkExternalMemoryProperties VkExternalMemoryPropertiesKHR;

typedef VkPhysicalDeviceExternalImageFormatInfo VkPhysicalDeviceExternalImageFormatInfoKHR;

typedef VkExternalImageFormatProperties VkExternalImageFormatPropertiesKHR;

typedef VkPhysicalDeviceExternalBufferInfo VkPhysicalDeviceExternalBufferInfoKHR;

typedef VkExternalBufferProperties VkExternalBufferPropertiesKHR;

typedef VkPhysicalDeviceIDProperties VkPhysicalDeviceIDPropertiesKHR;

typedef VkExternalMemoryImageCreateInfo VkExternalMemoryImageCreateInfoKHR;

typedef VkExternalMemoryBufferCreateInfo VkExternalMemoryBufferCreateInfoKHR;

typedef VkExportMemoryAllocateInfo VkExportMemoryAllocateInfoKHR;

typedef VkPhysicalDeviceExternalFenceInfo VkPhysicalDeviceExternalFenceInfoKHR;

typedef VkExternalFenceProperties VkExternalFencePropertiesKHR;

typedef VkExportFenceCreateInfo VkExportFenceCreateInfoKHR;

typedef VkExportSemaphoreCreateInfo VkExportSemaphoreCreateInfoKHR;

typedef VkPhysicalDeviceExternalSemaphoreInfo VkPhysicalDeviceExternalSemaphoreInfoKHR;

typedef VkExternalSemaphoreProperties VkExternalSemaphorePropertiesKHR;

typedef VkPhysicalDeviceMaintenance3Properties VkPhysicalDeviceMaintenance3PropertiesKHR;

typedef VkDescriptorSetLayoutSupport VkDescriptorSetLayoutSupportKHR;

typedef VkPhysicalDeviceShaderDrawParametersFeatures VkPhysicalDeviceShaderDrawParameterFeatures;

typedef VkConformanceVersion VkConformanceVersionKHR;

typedef VkImageFormatListCreateInfo VkImageFormatListCreateInfoKHR;

typedef VkAttachmentDescription2 VkAttachmentDescription2KHR;

typedef VkAttachmentReference2 VkAttachmentReference2KHR;

typedef VkSubpassDescription2 VkSubpassDescription2KHR;

typedef VkSubpassDependency2 VkSubpassDependency2KHR;

typedef VkRenderPassCreateInfo2 VkRenderPassCreateInfo2KHR;

typedef VkSubpassBeginInfo VkSubpassBeginInfoKHR;

typedef VkSubpassEndInfo VkSubpassEndInfoKHR;

typedef VkPhysicalDevice8BitStorageFeatures VkPhysicalDevice8BitStorageFeaturesKHR;

typedef VkPhysicalDeviceDriverProperties VkPhysicalDeviceDriverPropertiesKHR;

typedef VkPhysicalDeviceShaderAtomicInt64Features VkPhysicalDeviceShaderAtomicInt64FeaturesKHR;

typedef VkPhysicalDeviceFloatControlsProperties VkPhysicalDeviceFloatControlsPropertiesKHR;

typedef VkDescriptorSetLayoutBindingFlagsCreateInfo VkDescriptorSetLayoutBindingFlagsCreateInfoEXT;

typedef VkPhysicalDeviceDescriptorIndexingFeatures VkPhysicalDeviceDescriptorIndexingFeaturesEXT;

typedef VkPhysicalDeviceDescriptorIndexingProperties VkPhysicalDeviceDescriptorIndexingPropertiesEXT;

typedef VkDescriptorSetVariableDescriptorCountAllocateInfo VkDescriptorSetVariableDescriptorCountAllocateInfoEXT;

typedef VkDescriptorSetVariableDescriptorCountLayoutSupport VkDescriptorSetVariableDescriptorCountLayoutSupportEXT;

typedef VkSubpassDescriptionDepthStencilResolve VkSubpassDescriptionDepthStencilResolveKHR;

typedef VkPhysicalDeviceDepthStencilResolveProperties VkPhysicalDeviceDepthStencilResolvePropertiesKHR;

typedef VkPhysicalDeviceScalarBlockLayoutFeatures VkPhysicalDeviceScalarBlockLayoutFeaturesEXT;

typedef VkImageStencilUsageCreateInfo VkImageStencilUsageCreateInfoEXT;

typedef VkSamplerReductionModeCreateInfo VkSamplerReductionModeCreateInfoEXT;

typedef VkPhysicalDeviceSamplerFilterMinmaxProperties VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT;

typedef VkPhysicalDeviceVulkanMemoryModelFeatures VkPhysicalDeviceVulkanMemoryModelFeaturesKHR;

typedef VkPhysicalDeviceImagelessFramebufferFeatures VkPhysicalDeviceImagelessFramebufferFeaturesKHR;

typedef VkFramebufferAttachmentImageInfo VkFramebufferAttachmentImageInfoKHR;

typedef VkFramebufferAttachmentsCreateInfo VkFramebufferAttachmentsCreateInfoKHR;

typedef VkRenderPassAttachmentBeginInfo VkRenderPassAttachmentBeginInfoKHR;

typedef VkPhysicalDeviceUniformBufferStandardLayoutFeatures VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR;

typedef VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR;

typedef VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR;

typedef VkAttachmentReferenceStencilLayout VkAttachmentReferenceStencilLayoutKHR;

typedef VkAttachmentDescriptionStencilLayout VkAttachmentDescriptionStencilLayoutKHR;

typedef VkPhysicalDeviceHostQueryResetFeatures VkPhysicalDeviceHostQueryResetFeaturesEXT;

typedef VkPhysicalDeviceTimelineSemaphoreFeatures VkPhysicalDeviceTimelineSemaphoreFeaturesKHR;

typedef VkPhysicalDeviceTimelineSemaphoreProperties VkPhysicalDeviceTimelineSemaphorePropertiesKHR;

typedef VkSemaphoreTypeCreateInfo VkSemaphoreTypeCreateInfoKHR;

typedef VkTimelineSemaphoreSubmitInfo VkTimelineSemaphoreSubmitInfoKHR;

typedef VkSemaphoreWaitInfo VkSemaphoreWaitInfoKHR;

typedef VkSemaphoreSignalInfo VkSemaphoreSignalInfoKHR;

typedef VkPhysicalDeviceBufferDeviceAddressFeatures VkPhysicalDeviceBufferDeviceAddressFeaturesKHR;

typedef VkBufferOpaqueCaptureAddressCreateInfo VkBufferOpaqueCaptureAddressCreateInfoKHR;

typedef VkMemoryOpaqueCaptureAddressAllocateInfo VkMemoryOpaqueCaptureAddressAllocateInfoKHR;

typedef VkDeviceMemoryOpaqueCaptureAddressInfo VkDeviceMemoryOpaqueCaptureAddressInfoKHR;

typedef VkTransformMatrixKHR VkTransformMatrixNV;

typedef VkAabbPositionsKHR VkAabbPositionsNV;

typedef VkAccelerationStructureInstanceKHR VkAccelerationStructureInstanceNV;

typedef VkQueryPoolPerformanceQueryCreateInfoINTEL VkQueryPoolCreateInfoINTEL;

typedef VkPhysicalDeviceBufferDeviceAddressFeaturesEXT VkPhysicalDeviceBufferAddressFeaturesEXT;

