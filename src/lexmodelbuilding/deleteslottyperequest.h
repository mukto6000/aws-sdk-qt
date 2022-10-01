// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEREQUEST_H
#define QTAWS_DELETESLOTTYPEREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteSlotTypeRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteSlotTypeRequest : public LexModelBuildingRequest {

public:
    DeleteSlotTypeRequest(const DeleteSlotTypeRequest &other);
    DeleteSlotTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlotTypeRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
