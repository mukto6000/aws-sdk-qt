// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMPORTREQUEST_H
#define QTAWS_GETIMPORTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetImportRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetImportRequest : public LexModelBuildingRequest {

public:
    GetImportRequest(const GetImportRequest &other);
    GetImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImportRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
