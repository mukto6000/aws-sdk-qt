// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTINSLOTTYPESREQUEST_H
#define QTAWS_GETBUILTINSLOTTYPESREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinSlotTypesRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBuiltinSlotTypesRequest : public LexModelBuildingRequest {

public:
    GetBuiltinSlotTypesRequest(const GetBuiltinSlotTypesRequest &other);
    GetBuiltinSlotTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBuiltinSlotTypesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
