// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLAYERSREQUEST_H
#define QTAWS_LISTLAYERSREQUEST_H

#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class ListLayersRequestPrivate;

class QTAWSLAMBDA_EXPORT ListLayersRequest : public LambdaRequest {

public:
    ListLayersRequest(const ListLayersRequest &other);
    ListLayersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLayersRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
