// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFINDINGSREQUEST_H
#define QTAWS_DESCRIBEFINDINGSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DescribeFindingsRequestPrivate;

class QTAWSINSPECTOR_EXPORT DescribeFindingsRequest : public InspectorRequest {

public:
    DescribeFindingsRequest(const DescribeFindingsRequest &other);
    DescribeFindingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFindingsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
