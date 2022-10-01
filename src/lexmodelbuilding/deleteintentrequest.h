// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTREQUEST_H
#define QTAWS_DELETEINTENTREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteIntentRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteIntentRequest : public LexModelBuildingRequest {

public:
    DeleteIntentRequest(const DeleteIntentRequest &other);
    DeleteIntentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIntentRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
