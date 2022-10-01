// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEXSSMATCHSETREQUEST_H
#define QTAWS_UPDATEXSSMATCHSETREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class UpdateXssMatchSetRequestPrivate;

class QTAWSWAF_EXPORT UpdateXssMatchSetRequest : public WafRequest {

public:
    UpdateXssMatchSetRequest(const UpdateXssMatchSetRequest &other);
    UpdateXssMatchSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateXssMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
