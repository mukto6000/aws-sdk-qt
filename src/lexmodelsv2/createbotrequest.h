// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTREQUEST_H
#define QTAWS_CREATEBOTREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateBotRequest : public LexModelsV2Request {

public:
    CreateBotRequest(const CreateBotRequest &other);
    CreateBotRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
