// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTALIASREQUEST_H
#define QTAWS_UPDATEBOTALIASREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotAliasRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateBotAliasRequest : public LexModelsV2Request {

public:
    UpdateBotAliasRequest(const UpdateBotAliasRequest &other);
    UpdateBotAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotAliasRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
