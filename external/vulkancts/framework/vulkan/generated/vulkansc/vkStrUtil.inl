/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
const char*	getResultName							(VkResult value);
const char*	getStructureTypeName					(VkStructureType value);
const char*	getImageLayoutName						(VkImageLayout value);
const char*	getObjectTypeName						(VkObjectType value);
const char*	getPipelineCacheHeaderVersionName		(VkPipelineCacheHeaderVersion value);
const char*	getVendorIdName							(VkVendorId value);
const char*	getSystemAllocationScopeName			(VkSystemAllocationScope value);
const char*	getInternalAllocationTypeName			(VkInternalAllocationType value);
const char*	getFormatName							(VkFormat value);
const char*	getImageTilingName						(VkImageTiling value);
const char*	getImageTypeName						(VkImageType value);
const char*	getPhysicalDeviceTypeName				(VkPhysicalDeviceType value);
const char*	getQueryTypeName						(VkQueryType value);
const char*	getSharingModeName						(VkSharingMode value);
const char*	getComponentSwizzleName					(VkComponentSwizzle value);
const char*	getImageViewTypeName					(VkImageViewType value);
const char*	getBlendFactorName						(VkBlendFactor value);
const char*	getBlendOpName							(VkBlendOp value);
const char*	getCompareOpName						(VkCompareOp value);
const char*	getDynamicStateName						(VkDynamicState value);
const char*	getFrontFaceName						(VkFrontFace value);
const char*	getVertexInputRateName					(VkVertexInputRate value);
const char*	getPrimitiveTopologyName				(VkPrimitiveTopology value);
const char*	getPolygonModeName						(VkPolygonMode value);
const char*	getStencilOpName						(VkStencilOp value);
const char*	getLogicOpName							(VkLogicOp value);
const char*	getBorderColorName						(VkBorderColor value);
const char*	getFilterName							(VkFilter value);
const char*	getSamplerAddressModeName				(VkSamplerAddressMode value);
const char*	getSamplerMipmapModeName				(VkSamplerMipmapMode value);
const char*	getDescriptorTypeName					(VkDescriptorType value);
const char*	getAttachmentLoadOpName					(VkAttachmentLoadOp value);
const char*	getAttachmentStoreOpName				(VkAttachmentStoreOp value);
const char*	getPipelineBindPointName				(VkPipelineBindPoint value);
const char*	getCommandBufferLevelName				(VkCommandBufferLevel value);
const char*	getIndexTypeName						(VkIndexType value);
const char*	getSubpassContentsName					(VkSubpassContents value);
const char*	getPointClippingBehaviorName			(VkPointClippingBehavior value);
const char*	getTessellationDomainOriginName			(VkTessellationDomainOrigin value);
const char*	getSamplerYcbcrModelConversionName		(VkSamplerYcbcrModelConversion value);
const char*	getSamplerYcbcrRangeName				(VkSamplerYcbcrRange value);
const char*	getChromaLocationName					(VkChromaLocation value);
const char*	getDriverIdName							(VkDriverId value);
const char*	getShaderFloatControlsIndependenceName	(VkShaderFloatControlsIndependence value);
const char*	getSamplerReductionModeName				(VkSamplerReductionMode value);
const char*	getSemaphoreTypeName					(VkSemaphoreType value);
const char*	getFaultLevelName						(VkFaultLevel value);
const char*	getFaultTypeName						(VkFaultType value);
const char*	getFaultQueryBehaviorName				(VkFaultQueryBehavior value);
const char*	getPipelineMatchControlName				(VkPipelineMatchControl value);
const char*	getPipelineCacheValidationVersionName	(VkPipelineCacheValidationVersion value);
const char*	getPresentModeKHRName					(VkPresentModeKHR value);
const char*	getColorSpaceKHRName					(VkColorSpaceKHR value);
const char*	getPerformanceCounterUnitKHRName		(VkPerformanceCounterUnitKHR value);
const char*	getPerformanceCounterScopeKHRName		(VkPerformanceCounterScopeKHR value);
const char*	getPerformanceCounterStorageKHRName		(VkPerformanceCounterStorageKHR value);
const char*	getFragmentShadingRateCombinerOpKHRName	(VkFragmentShadingRateCombinerOpKHR value);
const char*	getDisplayPowerStateEXTName				(VkDisplayPowerStateEXT value);
const char*	getDeviceEventTypeEXTName				(VkDeviceEventTypeEXT value);
const char*	getDisplayEventTypeEXTName				(VkDisplayEventTypeEXT value);
const char*	getDiscardRectangleModeEXTName			(VkDiscardRectangleModeEXT value);
const char*	getConservativeRasterizationModeEXTName	(VkConservativeRasterizationModeEXT value);
const char*	getBlendOverlapEXTName					(VkBlendOverlapEXT value);
const char*	getQueueGlobalPriorityEXTName			(VkQueueGlobalPriorityEXT value);
const char*	getTimeDomainEXTName					(VkTimeDomainEXT value);
const char*	getValidationFeatureEnableEXTName		(VkValidationFeatureEnableEXT value);
const char*	getValidationFeatureDisableEXTName		(VkValidationFeatureDisableEXT value);
const char*	getLineRasterizationModeEXTName			(VkLineRasterizationModeEXT value);

inline tcu::Format::Enum<VkResult>								getResultStr							(VkResult value)							{ return tcu::Format::Enum<VkResult>(getResultName, value);														}
inline tcu::Format::Enum<VkStructureType>						getStructureTypeStr						(VkStructureType value)						{ return tcu::Format::Enum<VkStructureType>(getStructureTypeName, value);										}
inline tcu::Format::Enum<VkImageLayout>							getImageLayoutStr						(VkImageLayout value)						{ return tcu::Format::Enum<VkImageLayout>(getImageLayoutName, value);											}
inline tcu::Format::Enum<VkObjectType>							getObjectTypeStr						(VkObjectType value)						{ return tcu::Format::Enum<VkObjectType>(getObjectTypeName, value);												}
inline tcu::Format::Enum<VkPipelineCacheHeaderVersion>			getPipelineCacheHeaderVersionStr		(VkPipelineCacheHeaderVersion value)		{ return tcu::Format::Enum<VkPipelineCacheHeaderVersion>(getPipelineCacheHeaderVersionName, value);				}
inline tcu::Format::Enum<VkVendorId>							getVendorIdStr							(VkVendorId value)							{ return tcu::Format::Enum<VkVendorId>(getVendorIdName, value);													}
inline tcu::Format::Enum<VkSystemAllocationScope>				getSystemAllocationScopeStr				(VkSystemAllocationScope value)				{ return tcu::Format::Enum<VkSystemAllocationScope>(getSystemAllocationScopeName, value);						}
inline tcu::Format::Enum<VkInternalAllocationType>				getInternalAllocationTypeStr			(VkInternalAllocationType value)			{ return tcu::Format::Enum<VkInternalAllocationType>(getInternalAllocationTypeName, value);						}
inline tcu::Format::Enum<VkFormat>								getFormatStr							(VkFormat value)							{ return tcu::Format::Enum<VkFormat>(getFormatName, value);														}
inline tcu::Format::Enum<VkImageTiling>							getImageTilingStr						(VkImageTiling value)						{ return tcu::Format::Enum<VkImageTiling>(getImageTilingName, value);											}
inline tcu::Format::Enum<VkImageType>							getImageTypeStr							(VkImageType value)							{ return tcu::Format::Enum<VkImageType>(getImageTypeName, value);												}
inline tcu::Format::Enum<VkPhysicalDeviceType>					getPhysicalDeviceTypeStr				(VkPhysicalDeviceType value)				{ return tcu::Format::Enum<VkPhysicalDeviceType>(getPhysicalDeviceTypeName, value);								}
inline tcu::Format::Enum<VkQueryType>							getQueryTypeStr							(VkQueryType value)							{ return tcu::Format::Enum<VkQueryType>(getQueryTypeName, value);												}
inline tcu::Format::Enum<VkSharingMode>							getSharingModeStr						(VkSharingMode value)						{ return tcu::Format::Enum<VkSharingMode>(getSharingModeName, value);											}
inline tcu::Format::Enum<VkComponentSwizzle>					getComponentSwizzleStr					(VkComponentSwizzle value)					{ return tcu::Format::Enum<VkComponentSwizzle>(getComponentSwizzleName, value);									}
inline tcu::Format::Enum<VkImageViewType>						getImageViewTypeStr						(VkImageViewType value)						{ return tcu::Format::Enum<VkImageViewType>(getImageViewTypeName, value);										}
inline tcu::Format::Enum<VkBlendFactor>							getBlendFactorStr						(VkBlendFactor value)						{ return tcu::Format::Enum<VkBlendFactor>(getBlendFactorName, value);											}
inline tcu::Format::Enum<VkBlendOp>								getBlendOpStr							(VkBlendOp value)							{ return tcu::Format::Enum<VkBlendOp>(getBlendOpName, value);													}
inline tcu::Format::Enum<VkCompareOp>							getCompareOpStr							(VkCompareOp value)							{ return tcu::Format::Enum<VkCompareOp>(getCompareOpName, value);												}
inline tcu::Format::Enum<VkDynamicState>						getDynamicStateStr						(VkDynamicState value)						{ return tcu::Format::Enum<VkDynamicState>(getDynamicStateName, value);											}
inline tcu::Format::Enum<VkFrontFace>							getFrontFaceStr							(VkFrontFace value)							{ return tcu::Format::Enum<VkFrontFace>(getFrontFaceName, value);												}
inline tcu::Format::Enum<VkVertexInputRate>						getVertexInputRateStr					(VkVertexInputRate value)					{ return tcu::Format::Enum<VkVertexInputRate>(getVertexInputRateName, value);									}
inline tcu::Format::Enum<VkPrimitiveTopology>					getPrimitiveTopologyStr					(VkPrimitiveTopology value)					{ return tcu::Format::Enum<VkPrimitiveTopology>(getPrimitiveTopologyName, value);								}
inline tcu::Format::Enum<VkPolygonMode>							getPolygonModeStr						(VkPolygonMode value)						{ return tcu::Format::Enum<VkPolygonMode>(getPolygonModeName, value);											}
inline tcu::Format::Enum<VkStencilOp>							getStencilOpStr							(VkStencilOp value)							{ return tcu::Format::Enum<VkStencilOp>(getStencilOpName, value);												}
inline tcu::Format::Enum<VkLogicOp>								getLogicOpStr							(VkLogicOp value)							{ return tcu::Format::Enum<VkLogicOp>(getLogicOpName, value);													}
inline tcu::Format::Enum<VkBorderColor>							getBorderColorStr						(VkBorderColor value)						{ return tcu::Format::Enum<VkBorderColor>(getBorderColorName, value);											}
inline tcu::Format::Enum<VkFilter>								getFilterStr							(VkFilter value)							{ return tcu::Format::Enum<VkFilter>(getFilterName, value);														}
inline tcu::Format::Enum<VkSamplerAddressMode>					getSamplerAddressModeStr				(VkSamplerAddressMode value)				{ return tcu::Format::Enum<VkSamplerAddressMode>(getSamplerAddressModeName, value);								}
inline tcu::Format::Enum<VkSamplerMipmapMode>					getSamplerMipmapModeStr					(VkSamplerMipmapMode value)					{ return tcu::Format::Enum<VkSamplerMipmapMode>(getSamplerMipmapModeName, value);								}
inline tcu::Format::Enum<VkDescriptorType>						getDescriptorTypeStr					(VkDescriptorType value)					{ return tcu::Format::Enum<VkDescriptorType>(getDescriptorTypeName, value);										}
inline tcu::Format::Enum<VkAttachmentLoadOp>					getAttachmentLoadOpStr					(VkAttachmentLoadOp value)					{ return tcu::Format::Enum<VkAttachmentLoadOp>(getAttachmentLoadOpName, value);									}
inline tcu::Format::Enum<VkAttachmentStoreOp>					getAttachmentStoreOpStr					(VkAttachmentStoreOp value)					{ return tcu::Format::Enum<VkAttachmentStoreOp>(getAttachmentStoreOpName, value);								}
inline tcu::Format::Enum<VkPipelineBindPoint>					getPipelineBindPointStr					(VkPipelineBindPoint value)					{ return tcu::Format::Enum<VkPipelineBindPoint>(getPipelineBindPointName, value);								}
inline tcu::Format::Enum<VkCommandBufferLevel>					getCommandBufferLevelStr				(VkCommandBufferLevel value)				{ return tcu::Format::Enum<VkCommandBufferLevel>(getCommandBufferLevelName, value);								}
inline tcu::Format::Enum<VkIndexType>							getIndexTypeStr							(VkIndexType value)							{ return tcu::Format::Enum<VkIndexType>(getIndexTypeName, value);												}
inline tcu::Format::Enum<VkSubpassContents>						getSubpassContentsStr					(VkSubpassContents value)					{ return tcu::Format::Enum<VkSubpassContents>(getSubpassContentsName, value);									}
inline tcu::Format::Enum<VkPointClippingBehavior>				getPointClippingBehaviorStr				(VkPointClippingBehavior value)				{ return tcu::Format::Enum<VkPointClippingBehavior>(getPointClippingBehaviorName, value);						}
inline tcu::Format::Enum<VkTessellationDomainOrigin>			getTessellationDomainOriginStr			(VkTessellationDomainOrigin value)			{ return tcu::Format::Enum<VkTessellationDomainOrigin>(getTessellationDomainOriginName, value);					}
inline tcu::Format::Enum<VkSamplerYcbcrModelConversion>			getSamplerYcbcrModelConversionStr		(VkSamplerYcbcrModelConversion value)		{ return tcu::Format::Enum<VkSamplerYcbcrModelConversion>(getSamplerYcbcrModelConversionName, value);			}
inline tcu::Format::Enum<VkSamplerYcbcrRange>					getSamplerYcbcrRangeStr					(VkSamplerYcbcrRange value)					{ return tcu::Format::Enum<VkSamplerYcbcrRange>(getSamplerYcbcrRangeName, value);								}
inline tcu::Format::Enum<VkChromaLocation>						getChromaLocationStr					(VkChromaLocation value)					{ return tcu::Format::Enum<VkChromaLocation>(getChromaLocationName, value);										}
inline tcu::Format::Enum<VkDriverId>							getDriverIdStr							(VkDriverId value)							{ return tcu::Format::Enum<VkDriverId>(getDriverIdName, value);													}
inline tcu::Format::Enum<VkShaderFloatControlsIndependence>		getShaderFloatControlsIndependenceStr	(VkShaderFloatControlsIndependence value)	{ return tcu::Format::Enum<VkShaderFloatControlsIndependence>(getShaderFloatControlsIndependenceName, value);	}
inline tcu::Format::Enum<VkSamplerReductionMode>				getSamplerReductionModeStr				(VkSamplerReductionMode value)				{ return tcu::Format::Enum<VkSamplerReductionMode>(getSamplerReductionModeName, value);							}
inline tcu::Format::Enum<VkSemaphoreType>						getSemaphoreTypeStr						(VkSemaphoreType value)						{ return tcu::Format::Enum<VkSemaphoreType>(getSemaphoreTypeName, value);										}
inline tcu::Format::Enum<VkFaultLevel>							getFaultLevelStr						(VkFaultLevel value)						{ return tcu::Format::Enum<VkFaultLevel>(getFaultLevelName, value);												}
inline tcu::Format::Enum<VkFaultType>							getFaultTypeStr							(VkFaultType value)							{ return tcu::Format::Enum<VkFaultType>(getFaultTypeName, value);												}
inline tcu::Format::Enum<VkFaultQueryBehavior>					getFaultQueryBehaviorStr				(VkFaultQueryBehavior value)				{ return tcu::Format::Enum<VkFaultQueryBehavior>(getFaultQueryBehaviorName, value);								}
inline tcu::Format::Enum<VkPipelineMatchControl>				getPipelineMatchControlStr				(VkPipelineMatchControl value)				{ return tcu::Format::Enum<VkPipelineMatchControl>(getPipelineMatchControlName, value);							}
inline tcu::Format::Enum<VkPipelineCacheValidationVersion>		getPipelineCacheValidationVersionStr	(VkPipelineCacheValidationVersion value)	{ return tcu::Format::Enum<VkPipelineCacheValidationVersion>(getPipelineCacheValidationVersionName, value);		}
inline tcu::Format::Enum<VkPresentModeKHR>						getPresentModeKHRStr					(VkPresentModeKHR value)					{ return tcu::Format::Enum<VkPresentModeKHR>(getPresentModeKHRName, value);										}
inline tcu::Format::Enum<VkColorSpaceKHR>						getColorSpaceKHRStr						(VkColorSpaceKHR value)						{ return tcu::Format::Enum<VkColorSpaceKHR>(getColorSpaceKHRName, value);										}
inline tcu::Format::Enum<VkPerformanceCounterUnitKHR>			getPerformanceCounterUnitKHRStr			(VkPerformanceCounterUnitKHR value)			{ return tcu::Format::Enum<VkPerformanceCounterUnitKHR>(getPerformanceCounterUnitKHRName, value);				}
inline tcu::Format::Enum<VkPerformanceCounterScopeKHR>			getPerformanceCounterScopeKHRStr		(VkPerformanceCounterScopeKHR value)		{ return tcu::Format::Enum<VkPerformanceCounterScopeKHR>(getPerformanceCounterScopeKHRName, value);				}
inline tcu::Format::Enum<VkPerformanceCounterStorageKHR>		getPerformanceCounterStorageKHRStr		(VkPerformanceCounterStorageKHR value)		{ return tcu::Format::Enum<VkPerformanceCounterStorageKHR>(getPerformanceCounterStorageKHRName, value);			}
inline tcu::Format::Enum<VkFragmentShadingRateCombinerOpKHR>	getFragmentShadingRateCombinerOpKHRStr	(VkFragmentShadingRateCombinerOpKHR value)	{ return tcu::Format::Enum<VkFragmentShadingRateCombinerOpKHR>(getFragmentShadingRateCombinerOpKHRName, value);	}
inline tcu::Format::Enum<VkDisplayPowerStateEXT>				getDisplayPowerStateEXTStr				(VkDisplayPowerStateEXT value)				{ return tcu::Format::Enum<VkDisplayPowerStateEXT>(getDisplayPowerStateEXTName, value);							}
inline tcu::Format::Enum<VkDeviceEventTypeEXT>					getDeviceEventTypeEXTStr				(VkDeviceEventTypeEXT value)				{ return tcu::Format::Enum<VkDeviceEventTypeEXT>(getDeviceEventTypeEXTName, value);								}
inline tcu::Format::Enum<VkDisplayEventTypeEXT>					getDisplayEventTypeEXTStr				(VkDisplayEventTypeEXT value)				{ return tcu::Format::Enum<VkDisplayEventTypeEXT>(getDisplayEventTypeEXTName, value);							}
inline tcu::Format::Enum<VkDiscardRectangleModeEXT>				getDiscardRectangleModeEXTStr			(VkDiscardRectangleModeEXT value)			{ return tcu::Format::Enum<VkDiscardRectangleModeEXT>(getDiscardRectangleModeEXTName, value);					}
inline tcu::Format::Enum<VkConservativeRasterizationModeEXT>	getConservativeRasterizationModeEXTStr	(VkConservativeRasterizationModeEXT value)	{ return tcu::Format::Enum<VkConservativeRasterizationModeEXT>(getConservativeRasterizationModeEXTName, value);	}
inline tcu::Format::Enum<VkBlendOverlapEXT>						getBlendOverlapEXTStr					(VkBlendOverlapEXT value)					{ return tcu::Format::Enum<VkBlendOverlapEXT>(getBlendOverlapEXTName, value);									}
inline tcu::Format::Enum<VkQueueGlobalPriorityEXT>				getQueueGlobalPriorityEXTStr			(VkQueueGlobalPriorityEXT value)			{ return tcu::Format::Enum<VkQueueGlobalPriorityEXT>(getQueueGlobalPriorityEXTName, value);						}
inline tcu::Format::Enum<VkTimeDomainEXT>						getTimeDomainEXTStr						(VkTimeDomainEXT value)						{ return tcu::Format::Enum<VkTimeDomainEXT>(getTimeDomainEXTName, value);										}
inline tcu::Format::Enum<VkValidationFeatureEnableEXT>			getValidationFeatureEnableEXTStr		(VkValidationFeatureEnableEXT value)		{ return tcu::Format::Enum<VkValidationFeatureEnableEXT>(getValidationFeatureEnableEXTName, value);				}
inline tcu::Format::Enum<VkValidationFeatureDisableEXT>			getValidationFeatureDisableEXTStr		(VkValidationFeatureDisableEXT value)		{ return tcu::Format::Enum<VkValidationFeatureDisableEXT>(getValidationFeatureDisableEXTName, value);			}
inline tcu::Format::Enum<VkLineRasterizationModeEXT>			getLineRasterizationModeEXTStr			(VkLineRasterizationModeEXT value)			{ return tcu::Format::Enum<VkLineRasterizationModeEXT>(getLineRasterizationModeEXTName, value);					}

inline std::ostream&	operator<<	(std::ostream& s, VkResult value)							{ return s << getResultStr(value);								}
inline std::ostream&	operator<<	(std::ostream& s, VkStructureType value)					{ return s << getStructureTypeStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkImageLayout value)						{ return s << getImageLayoutStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkObjectType value)						{ return s << getObjectTypeStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkPipelineCacheHeaderVersion value)		{ return s << getPipelineCacheHeaderVersionStr(value);			}
inline std::ostream&	operator<<	(std::ostream& s, VkVendorId value)							{ return s << getVendorIdStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkSystemAllocationScope value)			{ return s << getSystemAllocationScopeStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkInternalAllocationType value)			{ return s << getInternalAllocationTypeStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkFormat value)							{ return s << getFormatStr(value);								}
inline std::ostream&	operator<<	(std::ostream& s, VkImageTiling value)						{ return s << getImageTilingStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkImageType value)						{ return s << getImageTypeStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkPhysicalDeviceType value)				{ return s << getPhysicalDeviceTypeStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkQueryType value)						{ return s << getQueryTypeStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkSharingMode value)						{ return s << getSharingModeStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkComponentSwizzle value)					{ return s << getComponentSwizzleStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkImageViewType value)					{ return s << getImageViewTypeStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkBlendFactor value)						{ return s << getBlendFactorStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkBlendOp value)							{ return s << getBlendOpStr(value);								}
inline std::ostream&	operator<<	(std::ostream& s, VkCompareOp value)						{ return s << getCompareOpStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkDynamicState value)						{ return s << getDynamicStateStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkFrontFace value)						{ return s << getFrontFaceStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkVertexInputRate value)					{ return s << getVertexInputRateStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkPrimitiveTopology value)				{ return s << getPrimitiveTopologyStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkPolygonMode value)						{ return s << getPolygonModeStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkStencilOp value)						{ return s << getStencilOpStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkLogicOp value)							{ return s << getLogicOpStr(value);								}
inline std::ostream&	operator<<	(std::ostream& s, VkBorderColor value)						{ return s << getBorderColorStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkFilter value)							{ return s << getFilterStr(value);								}
inline std::ostream&	operator<<	(std::ostream& s, VkSamplerAddressMode value)				{ return s << getSamplerAddressModeStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkSamplerMipmapMode value)				{ return s << getSamplerMipmapModeStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkDescriptorType value)					{ return s << getDescriptorTypeStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkAttachmentLoadOp value)					{ return s << getAttachmentLoadOpStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkAttachmentStoreOp value)				{ return s << getAttachmentStoreOpStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkPipelineBindPoint value)				{ return s << getPipelineBindPointStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkCommandBufferLevel value)				{ return s << getCommandBufferLevelStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkIndexType value)						{ return s << getIndexTypeStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkSubpassContents value)					{ return s << getSubpassContentsStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkPointClippingBehavior value)			{ return s << getPointClippingBehaviorStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkTessellationDomainOrigin value)			{ return s << getTessellationDomainOriginStr(value);			}
inline std::ostream&	operator<<	(std::ostream& s, VkSamplerYcbcrModelConversion value)		{ return s << getSamplerYcbcrModelConversionStr(value);			}
inline std::ostream&	operator<<	(std::ostream& s, VkSamplerYcbcrRange value)				{ return s << getSamplerYcbcrRangeStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkChromaLocation value)					{ return s << getChromaLocationStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkDriverId value)							{ return s << getDriverIdStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkShaderFloatControlsIndependence value)	{ return s << getShaderFloatControlsIndependenceStr(value);		}
inline std::ostream&	operator<<	(std::ostream& s, VkSamplerReductionMode value)				{ return s << getSamplerReductionModeStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkSemaphoreType value)					{ return s << getSemaphoreTypeStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkFaultLevel value)						{ return s << getFaultLevelStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkFaultType value)						{ return s << getFaultTypeStr(value);							}
inline std::ostream&	operator<<	(std::ostream& s, VkFaultQueryBehavior value)				{ return s << getFaultQueryBehaviorStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkPipelineMatchControl value)				{ return s << getPipelineMatchControlStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkPipelineCacheValidationVersion value)	{ return s << getPipelineCacheValidationVersionStr(value);		}
inline std::ostream&	operator<<	(std::ostream& s, VkPresentModeKHR value)					{ return s << getPresentModeKHRStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkColorSpaceKHR value)					{ return s << getColorSpaceKHRStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkPerformanceCounterUnitKHR value)		{ return s << getPerformanceCounterUnitKHRStr(value);			}
inline std::ostream&	operator<<	(std::ostream& s, VkPerformanceCounterScopeKHR value)		{ return s << getPerformanceCounterScopeKHRStr(value);			}
inline std::ostream&	operator<<	(std::ostream& s, VkPerformanceCounterStorageKHR value)		{ return s << getPerformanceCounterStorageKHRStr(value);		}
inline std::ostream&	operator<<	(std::ostream& s, VkFragmentShadingRateCombinerOpKHR value)	{ return s << getFragmentShadingRateCombinerOpKHRStr(value);	}
inline std::ostream&	operator<<	(std::ostream& s, VkDisplayPowerStateEXT value)				{ return s << getDisplayPowerStateEXTStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkDeviceEventTypeEXT value)				{ return s << getDeviceEventTypeEXTStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkDisplayEventTypeEXT value)				{ return s << getDisplayEventTypeEXTStr(value);					}
inline std::ostream&	operator<<	(std::ostream& s, VkDiscardRectangleModeEXT value)			{ return s << getDiscardRectangleModeEXTStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkConservativeRasterizationModeEXT value)	{ return s << getConservativeRasterizationModeEXTStr(value);	}
inline std::ostream&	operator<<	(std::ostream& s, VkBlendOverlapEXT value)					{ return s << getBlendOverlapEXTStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkQueueGlobalPriorityEXT value)			{ return s << getQueueGlobalPriorityEXTStr(value);				}
inline std::ostream&	operator<<	(std::ostream& s, VkTimeDomainEXT value)					{ return s << getTimeDomainEXTStr(value);						}
inline std::ostream&	operator<<	(std::ostream& s, VkValidationFeatureEnableEXT value)		{ return s << getValidationFeatureEnableEXTStr(value);			}
inline std::ostream&	operator<<	(std::ostream& s, VkValidationFeatureDisableEXT value)		{ return s << getValidationFeatureDisableEXTStr(value);			}
inline std::ostream&	operator<<	(std::ostream& s, VkLineRasterizationModeEXT value)			{ return s << getLineRasterizationModeEXTStr(value);			}

tcu::Format::Bitfield<32>	getAccessFlagsStr											(VkAccessFlags value);
tcu::Format::Bitfield<32>	getImageAspectFlagsStr										(VkImageAspectFlags value);
tcu::Format::Bitfield<32>	getFormatFeatureFlagsStr									(VkFormatFeatureFlags value);
tcu::Format::Bitfield<32>	getImageCreateFlagsStr										(VkImageCreateFlags value);
tcu::Format::Bitfield<32>	getSampleCountFlagsStr										(VkSampleCountFlags value);
tcu::Format::Bitfield<32>	getImageUsageFlagsStr										(VkImageUsageFlags value);
tcu::Format::Bitfield<32>	getMemoryHeapFlagsStr										(VkMemoryHeapFlags value);
tcu::Format::Bitfield<32>	getMemoryPropertyFlagsStr									(VkMemoryPropertyFlags value);
tcu::Format::Bitfield<32>	getQueueFlagsStr											(VkQueueFlags value);
tcu::Format::Bitfield<32>	getDeviceQueueCreateFlagsStr								(VkDeviceQueueCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineStageFlagsStr									(VkPipelineStageFlags value);
tcu::Format::Bitfield<32>	getFenceCreateFlagsStr										(VkFenceCreateFlags value);
tcu::Format::Bitfield<32>	getEventCreateFlagsStr										(VkEventCreateFlags value);
tcu::Format::Bitfield<32>	getQueryPipelineStatisticFlagsStr							(VkQueryPipelineStatisticFlags value);
tcu::Format::Bitfield<32>	getQueryResultFlagsStr										(VkQueryResultFlags value);
tcu::Format::Bitfield<32>	getBufferCreateFlagsStr										(VkBufferCreateFlags value);
tcu::Format::Bitfield<32>	getBufferUsageFlagsStr										(VkBufferUsageFlags value);
tcu::Format::Bitfield<32>	getImageViewCreateFlagsStr									(VkImageViewCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineCacheCreateFlagsStr								(VkPipelineCacheCreateFlags value);
tcu::Format::Bitfield<32>	getColorComponentFlagsStr									(VkColorComponentFlags value);
tcu::Format::Bitfield<32>	getPipelineCreateFlagsStr									(VkPipelineCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineShaderStageCreateFlagsStr						(VkPipelineShaderStageCreateFlags value);
tcu::Format::Bitfield<32>	getShaderStageFlagsStr										(VkShaderStageFlags value);
tcu::Format::Bitfield<32>	getCullModeFlagsStr											(VkCullModeFlags value);
tcu::Format::Bitfield<32>	getSamplerCreateFlagsStr									(VkSamplerCreateFlags value);
tcu::Format::Bitfield<32>	getDescriptorPoolCreateFlagsStr								(VkDescriptorPoolCreateFlags value);
tcu::Format::Bitfield<32>	getDescriptorSetLayoutCreateFlagsStr						(VkDescriptorSetLayoutCreateFlags value);
tcu::Format::Bitfield<32>	getAttachmentDescriptionFlagsStr							(VkAttachmentDescriptionFlags value);
tcu::Format::Bitfield<32>	getDependencyFlagsStr										(VkDependencyFlags value);
tcu::Format::Bitfield<32>	getFramebufferCreateFlagsStr								(VkFramebufferCreateFlags value);
tcu::Format::Bitfield<32>	getRenderPassCreateFlagsStr									(VkRenderPassCreateFlags value);
tcu::Format::Bitfield<32>	getSubpassDescriptionFlagsStr								(VkSubpassDescriptionFlags value);
tcu::Format::Bitfield<32>	getCommandPoolCreateFlagsStr								(VkCommandPoolCreateFlags value);
tcu::Format::Bitfield<32>	getCommandPoolResetFlagsStr									(VkCommandPoolResetFlags value);
tcu::Format::Bitfield<32>	getCommandBufferUsageFlagsStr								(VkCommandBufferUsageFlags value);
tcu::Format::Bitfield<32>	getQueryControlFlagsStr										(VkQueryControlFlags value);
tcu::Format::Bitfield<32>	getCommandBufferResetFlagsStr								(VkCommandBufferResetFlags value);
tcu::Format::Bitfield<32>	getStencilFaceFlagsStr										(VkStencilFaceFlags value);
tcu::Format::Bitfield<32>	getSubgroupFeatureFlagsStr									(VkSubgroupFeatureFlags value);
tcu::Format::Bitfield<32>	getPeerMemoryFeatureFlagsStr								(VkPeerMemoryFeatureFlags value);
tcu::Format::Bitfield<32>	getMemoryAllocateFlagsStr									(VkMemoryAllocateFlags value);
tcu::Format::Bitfield<32>	getExternalMemoryHandleTypeFlagsStr							(VkExternalMemoryHandleTypeFlags value);
tcu::Format::Bitfield<32>	getExternalMemoryFeatureFlagsStr							(VkExternalMemoryFeatureFlags value);
tcu::Format::Bitfield<32>	getExternalFenceHandleTypeFlagsStr							(VkExternalFenceHandleTypeFlags value);
tcu::Format::Bitfield<32>	getExternalFenceFeatureFlagsStr								(VkExternalFenceFeatureFlags value);
tcu::Format::Bitfield<32>	getFenceImportFlagsStr										(VkFenceImportFlags value);
tcu::Format::Bitfield<32>	getSemaphoreImportFlagsStr									(VkSemaphoreImportFlags value);
tcu::Format::Bitfield<32>	getExternalSemaphoreHandleTypeFlagsStr						(VkExternalSemaphoreHandleTypeFlags value);
tcu::Format::Bitfield<32>	getExternalSemaphoreFeatureFlagsStr							(VkExternalSemaphoreFeatureFlags value);
tcu::Format::Bitfield<32>	getResolveModeFlagsStr										(VkResolveModeFlags value);
tcu::Format::Bitfield<32>	getDescriptorBindingFlagsStr								(VkDescriptorBindingFlags value);
tcu::Format::Bitfield<32>	getSemaphoreWaitFlagsStr									(VkSemaphoreWaitFlags value);
tcu::Format::Bitfield<32>	getSurfaceTransformFlagsKHRStr								(VkSurfaceTransformFlagsKHR value);
tcu::Format::Bitfield<32>	getCompositeAlphaFlagsKHRStr								(VkCompositeAlphaFlagsKHR value);
tcu::Format::Bitfield<32>	getSwapchainCreateFlagsKHRStr								(VkSwapchainCreateFlagsKHR value);
tcu::Format::Bitfield<32>	getDeviceGroupPresentModeFlagsKHRStr						(VkDeviceGroupPresentModeFlagsKHR value);
tcu::Format::Bitfield<32>	getDisplayPlaneAlphaFlagsKHRStr								(VkDisplayPlaneAlphaFlagsKHR value);
tcu::Format::Bitfield<32>	getPerformanceCounterDescriptionFlagsKHRStr					(VkPerformanceCounterDescriptionFlagsKHR value);
tcu::Format::Bitfield<32>	getAcquireProfilingLockFlagsKHRStr							(VkAcquireProfilingLockFlagsKHR value);
tcu::Format::Bitfield<32>	getRefreshObjectFlagsKHRStr									(VkRefreshObjectFlagsKHR value);
tcu::Format::Bitfield<32>	getSubmitFlagsKHRStr										(VkSubmitFlagsKHR value);
tcu::Format::Bitfield<32>	getSurfaceCounterFlagsEXTStr								(VkSurfaceCounterFlagsEXT value);
tcu::Format::Bitfield<32>	getDebugUtilsMessageSeverityFlagsEXTStr						(VkDebugUtilsMessageSeverityFlagsEXT value);
tcu::Format::Bitfield<32>	getDebugUtilsMessageTypeFlagsEXTStr							(VkDebugUtilsMessageTypeFlagsEXT value);
tcu::Format::Bitfield<32>	getInstanceCreateFlagsStr									(VkInstanceCreateFlags value);
tcu::Format::Bitfield<32>	getDeviceCreateFlagsStr										(VkDeviceCreateFlags value);
tcu::Format::Bitfield<32>	getMemoryMapFlagsStr										(VkMemoryMapFlags value);
tcu::Format::Bitfield<32>	getSemaphoreCreateFlagsStr									(VkSemaphoreCreateFlags value);
tcu::Format::Bitfield<32>	getQueryPoolCreateFlagsStr									(VkQueryPoolCreateFlags value);
tcu::Format::Bitfield<32>	getBufferViewCreateFlagsStr									(VkBufferViewCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineVertexInputStateCreateFlagsStr					(VkPipelineVertexInputStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineInputAssemblyStateCreateFlagsStr					(VkPipelineInputAssemblyStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineTessellationStateCreateFlagsStr					(VkPipelineTessellationStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineViewportStateCreateFlagsStr						(VkPipelineViewportStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineRasterizationStateCreateFlagsStr					(VkPipelineRasterizationStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineMultisampleStateCreateFlagsStr					(VkPipelineMultisampleStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineDepthStencilStateCreateFlagsStr					(VkPipelineDepthStencilStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineColorBlendStateCreateFlagsStr					(VkPipelineColorBlendStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineDynamicStateCreateFlagsStr						(VkPipelineDynamicStateCreateFlags value);
tcu::Format::Bitfield<32>	getPipelineLayoutCreateFlagsStr								(VkPipelineLayoutCreateFlags value);
tcu::Format::Bitfield<32>	getDescriptorPoolResetFlagsStr								(VkDescriptorPoolResetFlags value);
tcu::Format::Bitfield<32>	getDisplayModeCreateFlagsKHRStr								(VkDisplayModeCreateFlagsKHR value);
tcu::Format::Bitfield<32>	getDisplaySurfaceCreateFlagsKHRStr							(VkDisplaySurfaceCreateFlagsKHR value);
tcu::Format::Bitfield<32>	getPipelineDiscardRectangleStateCreateFlagsEXTStr			(VkPipelineDiscardRectangleStateCreateFlagsEXT value);
tcu::Format::Bitfield<32>	getPipelineRasterizationConservativeStateCreateFlagsEXTStr	(VkPipelineRasterizationConservativeStateCreateFlagsEXT value);
tcu::Format::Bitfield<32>	getPipelineRasterizationDepthClipStateCreateFlagsEXTStr		(VkPipelineRasterizationDepthClipStateCreateFlagsEXT value);
tcu::Format::Bitfield<32>	getDebugUtilsMessengerCallbackDataFlagsEXTStr				(VkDebugUtilsMessengerCallbackDataFlagsEXT value);
tcu::Format::Bitfield<32>	getDebugUtilsMessengerCreateFlagsEXTStr						(VkDebugUtilsMessengerCreateFlagsEXT value);
tcu::Format::Bitfield<32>	getHeadlessSurfaceCreateFlagsEXTStr							(VkHeadlessSurfaceCreateFlagsEXT value);

std::ostream&	operator<<	(std::ostream& s, const VkExtent2D& value);
std::ostream&	operator<<	(std::ostream& s, const VkExtent3D& value);
std::ostream&	operator<<	(std::ostream& s, const VkOffset2D& value);
std::ostream&	operator<<	(std::ostream& s, const VkOffset3D& value);
std::ostream&	operator<<	(std::ostream& s, const VkRect2D& value);
std::ostream&	operator<<	(std::ostream& s, const VkBaseInStructure& value);
std::ostream&	operator<<	(std::ostream& s, const VkBaseOutStructure& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferMemoryBarrier& value);
std::ostream&	operator<<	(std::ostream& s, const VkDispatchIndirectCommand& value);
std::ostream&	operator<<	(std::ostream& s, const VkDrawIndexedIndirectCommand& value);
std::ostream&	operator<<	(std::ostream& s, const VkDrawIndirectCommand& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageSubresourceRange& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageMemoryBarrier& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryBarrier& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineCacheHeaderVersionOne& value);
std::ostream&	operator<<	(std::ostream& s, const VkAllocationCallbacks& value);
std::ostream&	operator<<	(std::ostream& s, const VkApplicationInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkFormatProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageFormatProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkInstanceCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryHeap& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryType& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceLimits& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceMemoryProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSparseProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkQueueFamilyProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceQueueCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExtensionProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkLayerProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubmitInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkMappedMemoryRange& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryAllocateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryRequirements& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageSubresource& value);
std::ostream&	operator<<	(std::ostream& s, const VkFenceCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSemaphoreCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkEventCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkQueryPoolCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferViewCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubresourceLayout& value);
std::ostream&	operator<<	(std::ostream& s, const VkComponentMapping& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageViewCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineCacheCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSpecializationMapEntry& value);
std::ostream&	operator<<	(std::ostream& s, const VkSpecializationInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineShaderStageCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkComputePipelineCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkVertexInputBindingDescription& value);
std::ostream&	operator<<	(std::ostream& s, const VkVertexInputAttributeDescription& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineVertexInputStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineInputAssemblyStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineTessellationStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkViewport& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineViewportStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineRasterizationStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineMultisampleStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkStencilOpState& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineDepthStencilStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineColorBlendAttachmentState& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineColorBlendStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineDynamicStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkGraphicsPipelineCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPushConstantRange& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineLayoutCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSamplerCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkCopyDescriptorSet& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorBufferInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorImageInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorPoolSize& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorPoolCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorSetAllocateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorSetLayoutBinding& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorSetLayoutCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkWriteDescriptorSet& value);
std::ostream&	operator<<	(std::ostream& s, const VkAttachmentDescription& value);
std::ostream&	operator<<	(std::ostream& s, const VkAttachmentReference& value);
std::ostream&	operator<<	(std::ostream& s, const VkFramebufferCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassDescription& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassDependency& value);
std::ostream&	operator<<	(std::ostream& s, const VkRenderPassCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkCommandPoolCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkCommandBufferAllocateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkCommandBufferInheritanceInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkCommandBufferBeginInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferCopy& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageSubresourceLayers& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferImageCopy& value);
std::ostream&	operator<<	(std::ostream& s, const VkClearColorValue& value);
std::ostream&	operator<<	(std::ostream& s, const VkClearDepthStencilValue& value);
std::ostream&	operator<<	(std::ostream& s, const VkClearValue& value);
std::ostream&	operator<<	(std::ostream& s, const VkClearAttachment& value);
std::ostream&	operator<<	(std::ostream& s, const VkClearRect& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageBlit& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageCopy& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageResolve& value);
std::ostream&	operator<<	(std::ostream& s, const VkRenderPassBeginInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSubgroupProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkBindBufferMemoryInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBindImageMemoryInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDevice16BitStorageFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryDedicatedRequirements& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryDedicatedAllocateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryAllocateFlagsInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceGroupRenderPassBeginInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceGroupCommandBufferBeginInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceGroupSubmitInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBindBufferMemoryDeviceGroupInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBindImageMemoryDeviceGroupInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceGroupProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceGroupDeviceCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferMemoryRequirementsInfo2& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageMemoryRequirementsInfo2& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryRequirements2& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceFeatures2& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceProperties2& value);
std::ostream&	operator<<	(std::ostream& s, const VkFormatProperties2& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageFormatProperties2& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceImageFormatInfo2& value);
std::ostream&	operator<<	(std::ostream& s, const VkQueueFamilyProperties2& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceMemoryProperties2& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDevicePointClippingProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkInputAttachmentAspectReference& value);
std::ostream&	operator<<	(std::ostream& s, const VkRenderPassInputAttachmentAspectCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageViewUsageCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineTessellationDomainOriginStateCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkRenderPassMultiviewCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceMultiviewFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceMultiviewProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVariablePointersFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceProtectedMemoryFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceProtectedMemoryProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceQueueInfo2& value);
std::ostream&	operator<<	(std::ostream& s, const VkProtectedSubmitInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSamplerYcbcrConversionCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSamplerYcbcrConversionInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBindImagePlaneMemoryInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkImagePlaneMemoryRequirementsInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSamplerYcbcrConversionFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkSamplerYcbcrConversionImageFormatProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkExternalMemoryProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceExternalImageFormatInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExternalImageFormatProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceExternalBufferInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExternalBufferProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceIDProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkExternalMemoryImageCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExternalMemoryBufferCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExportMemoryAllocateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceExternalFenceInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExternalFenceProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkExportFenceCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExportSemaphoreCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceExternalSemaphoreInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkExternalSemaphoreProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceMaintenance3Properties& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorSetLayoutSupport& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderDrawParametersFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVulkan11Features& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVulkan11Properties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVulkan12Features& value);
std::ostream&	operator<<	(std::ostream& s, const VkConformanceVersion& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVulkan12Properties& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageFormatListCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkAttachmentDescription2& value);
std::ostream&	operator<<	(std::ostream& s, const VkAttachmentReference2& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassDescription2& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassDependency2& value);
std::ostream&	operator<<	(std::ostream& s, const VkRenderPassCreateInfo2& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassBeginInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassEndInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDevice8BitStorageFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceDriverProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderAtomicInt64Features& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderFloat16Int8Features& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceFloatControlsProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorSetLayoutBindingFlagsCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceDescriptorIndexingFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceDescriptorIndexingProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorSetVariableDescriptorCountAllocateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDescriptorSetVariableDescriptorCountLayoutSupport& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassDescriptionDepthStencilResolve& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceDepthStencilResolveProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceScalarBlockLayoutFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageStencilUsageCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSamplerReductionModeCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSamplerFilterMinmaxProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVulkanMemoryModelFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceImagelessFramebufferFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkFramebufferAttachmentImageInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkFramebufferAttachmentsCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkRenderPassAttachmentBeginInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkAttachmentReferenceStencilLayout& value);
std::ostream&	operator<<	(std::ostream& s, const VkAttachmentDescriptionStencilLayout& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceHostQueryResetFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceTimelineSemaphoreFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceTimelineSemaphoreProperties& value);
std::ostream&	operator<<	(std::ostream& s, const VkSemaphoreTypeCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkTimelineSemaphoreSubmitInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSemaphoreWaitInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkSemaphoreSignalInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceBufferDeviceAddressFeatures& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferDeviceAddressInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferOpaqueCaptureAddressCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryOpaqueCaptureAddressAllocateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceMemoryOpaqueCaptureAddressInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVulkanSC10Features& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVulkanSC10Properties& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelinePoolSize& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceObjectReservationCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkCommandPoolMemoryReservationCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkCommandPoolMemoryConsumption& value);
std::ostream&	operator<<	(std::ostream& s, const VkFaultData& value);
std::ostream&	operator<<	(std::ostream& s, const VkFaultCallbackInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineOfflineCreateInfo& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineCacheStageValidationIndexEntry& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineCacheSafetyCriticalIndexEntry& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineCacheHeaderVersionSafetyCriticalOne& value);
std::ostream&	operator<<	(std::ostream& s, const VkSurfaceCapabilitiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSurfaceFormatKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSwapchainCreateInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPresentInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageSwapchainCreateInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkBindImageMemorySwapchainInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkAcquireNextImageInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceGroupPresentCapabilitiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceGroupPresentInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceGroupSwapchainCreateInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayModeParametersKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayModeCreateInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayModePropertiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPlaneCapabilitiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPlanePropertiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPropertiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplaySurfaceCreateInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPresentInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImportMemoryFdInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryFdPropertiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryGetFdInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImportSemaphoreFdInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSemaphoreGetFdInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkRectLayerKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPresentRegionKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPresentRegionsKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSharedPresentSurfaceCapabilitiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImportFenceFdInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkFenceGetFdInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDevicePerformanceQueryFeaturesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDevicePerformanceQueryPropertiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPerformanceCounterKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPerformanceCounterDescriptionKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkQueryPoolPerformanceCreateInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPerformanceCounterResultKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkAcquireProfilingLockInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPerformanceQuerySubmitInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPerformanceQueryReservationInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSurfaceInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSurfaceCapabilities2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSurfaceFormat2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayProperties2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPlaneProperties2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayModeProperties2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPlaneInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPlaneCapabilities2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderClockFeaturesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkFragmentShadingRateAttachmentInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineFragmentShadingRateStateCreateInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceFragmentShadingRateFeaturesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceFragmentShadingRatePropertiesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceFragmentShadingRateKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkRefreshObjectKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkRefreshObjectListKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryBarrier2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferMemoryBarrier2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageMemoryBarrier2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkDependencyInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSemaphoreSubmitInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkCommandBufferSubmitInfoKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubmitInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSynchronization2FeaturesKHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkQueueFamilyCheckpointProperties2NV& value);
std::ostream&	operator<<	(std::ostream& s, const VkCheckpointData2NV& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferCopy2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkCopyBufferInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageCopy2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkCopyImageInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkBufferImageCopy2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkCopyBufferToImageInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkCopyImageToBufferInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageBlit2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkBlitImageInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageResolve2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkResolveImageInfo2KHR& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageViewASTCDecodeModeEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceASTCDecodeFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkSurfaceCapabilities2EXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayPowerInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceEventInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDisplayEventInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkSwapchainCounterCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceDiscardRectanglePropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineDiscardRectangleStateCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineRasterizationConservativeStateCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceDepthClipEnableFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineRasterizationDepthClipStateCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkXYColorEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkHdrMetadataEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDebugUtilsLabelEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDebugUtilsObjectNameInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDebugUtilsMessengerCallbackDataEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDebugUtilsMessengerCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDebugUtilsObjectTagInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkSampleLocationEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkSampleLocationsInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkAttachmentSampleLocationsEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkSubpassSampleLocationsEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkRenderPassSampleLocationsBeginInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineSampleLocationsStateCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSampleLocationsPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkMultisamplePropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineColorBlendAdvancedStateCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDrmFormatModifierPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDrmFormatModifierPropertiesListEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageDrmFormatModifierListCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageDrmFormatModifierExplicitCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkImageDrmFormatModifierPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDrmFormatModifierProperties2EXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDrmFormatModifierPropertiesList2EXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceImageViewImageFormatInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkFilterCubicImageViewImageFormatPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkDeviceQueueGlobalPriorityCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkImportMemoryHostPointerInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkMemoryHostPointerPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkCalibratedTimestampInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkVertexInputBindingDivisorDescriptionEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineVertexInputDivisorStateCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDevicePCIBusInfoPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceMemoryBudgetPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkValidationFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkHeadlessSurfaceCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceLineRasterizationFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceLineRasterizationPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineRasterizationLineStateCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceRobustness2FeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceRobustness2PropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkSamplerCustomBorderColorCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceCustomBorderColorPropertiesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceCustomBorderColorFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceImageRobustnessFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDevice4444FormatsFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkVertexInputBindingDescription2EXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkVertexInputAttributeDescription2EXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPhysicalDeviceColorWriteEnableFeaturesEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkPipelineColorWriteCreateInfoEXT& value);
std::ostream&	operator<<	(std::ostream& s, const VkApplicationParametersEXT& value);
