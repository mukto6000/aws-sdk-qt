// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEOBJECTSREQUEST_H
#define QTAWS_GETTABLEOBJECTSREQUEST_H

#include "lakeformationrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetTableObjectsRequestPrivate;

class QTAWSLAKEFORMATION_EXPORT GetTableObjectsRequest : public LakeFormationRequest {

public:
    GetTableObjectsRequest(const GetTableObjectsRequest &other);
    GetTableObjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTableObjectsRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
