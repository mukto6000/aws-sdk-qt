// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTALIASREQUEST_H
#define QTAWS_DELETEBOTALIASREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotAliasRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteBotAliasRequest : public LexModelsV2Request {

public:
    DeleteBotAliasRequest(const DeleteBotAliasRequest &other);
    DeleteBotAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotAliasRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
