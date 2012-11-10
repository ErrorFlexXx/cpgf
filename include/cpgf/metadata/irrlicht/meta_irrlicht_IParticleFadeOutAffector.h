// Auto generated file, don't modify.

#ifndef __META_IRRLICHT_IPARTICLEFADEOUTAFFECTOR_H
#define __META_IRRLICHT_IPARTICLEFADEOUTAFFECTOR_H


#include "gmetaobjectlifemanager_irrlicht_ireferencecounted.h"
#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace irr;
using namespace irr::scene;


namespace meta_irrlicht { 


template <typename D>
void buildMetaClass_IParticleFadeOutAffector(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("getFadeOutTime", &D::ClassType::getFadeOutTime);
    _d.CPGF_MD_TEMPLATE _method("getTargetColor", &D::ClassType::getTargetColor);
    _d.CPGF_MD_TEMPLATE _method("getType", &D::ClassType::getType);
    _d.CPGF_MD_TEMPLATE _method("setFadeOutTime", &D::ClassType::setFadeOutTime);
    _d.CPGF_MD_TEMPLATE _method("setTargetColor", &D::ClassType::setTargetColor);
}


} // namespace meta_irrlicht




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
