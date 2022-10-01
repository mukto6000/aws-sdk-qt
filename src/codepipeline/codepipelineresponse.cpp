// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "codepipelineresponse.h"
#include "codepipelineresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/*!
 * \class QtAws::CodePipeline::CodePipelineResponse
 * \brief The CodePipelineResponse class provides an interface for CodePipeline responses.
 *
 * \inmodule QtAwsCodePipeline
 */

/*!
 * Constructs a CodePipelineResponse object with parent \a parent.
 */
CodePipelineResponse::CodePipelineResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CodePipelineResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a CodePipelineResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from CodePipelineResponsePrivate.
 */
CodePipelineResponse::CodePipelineResponse(CodePipelineResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void CodePipelineResponse::parseFailure(QIODevice &response)
{
    //Q_D(CodePipelineResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::CodePipeline::CodePipelineResponsePrivate
 * \brief The CodePipelineResponsePrivate class provides private implementation for CodePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsCodePipeline
 */

/*!
 * Constructs a CodePipelineResponsePrivate object with public implementation \a q.
 */
CodePipelineResponsePrivate::CodePipelineResponsePrivate(
    CodePipelineResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace CodePipeline
} // namespace QtAws
